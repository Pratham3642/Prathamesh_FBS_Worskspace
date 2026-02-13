#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

/* ================= STRUCT ================= */
struct Player
{
    int jerseyNo;
    char name[50];
    int runs;
    int wickets;
    int matches;
};

/* ================ DECLARATION =============== */
void addPlayer();
void displayPlayers();
void updatePlayer();
void deletePlayer();
void searchByJersey();
void searchByName();
int loadPlayers(struct Player p[]);
void sortByRuns(struct Player p[], int n);
void top3Players();
void toLowerCase(char str[]);

/* ================= MAIN ================= */
int main()
{
    int choice;

    while (1)
    {
        printf("\n--- Player Management System ---\n");
        printf("1. Add Player\n");
        printf("2. Display Players\n");
        printf("3. Update Player\n");
        printf("4. Delete Player\n");
        printf("5. Search by Jersey No\n");
        printf("6. Search by Name\n");
        printf("7. Count Players\n");
        printf("8. Sort Players by Runs\n");
        printf("9. Top 3 Players\n");
        printf("10. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addPlayer();
            break;
        case 2:
            displayPlayers();
            break;
        case 3:
            updatePlayer();
            break;
        case 4:
            deletePlayer();
            break;
        case 5:
            searchByJersey();
            break;
        case 6:
            searchByName();
            break;
        case 7:
            printf("Total Players: %d\n", loadPlayers(NULL));
            break;
        case 8:
        {
            struct Player p[MAX];
            int n = loadPlayers(p);
            if (n > 0)
            {
                sortByRuns(p, n);
                printf("\nPlayers Sorted by Runs:\n");
                for (int i = 0; i < n; i++)
                    printf("%s - %d Runs\n", p[i].name, p[i].runs);
            }
            else
                printf("No players found\n");
            break;
        }
        case 9:
            top3Players();
            break;
        case 10:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}

/* ================= ADD PLAYER ================= */
void addPlayer()
{
    FILE *fp = fopen("players.txt", "a");
    struct Player p;

    if (!fp)
    {
        printf("File error\n");
        return;
    }

    printf("Enter Jersey No: ");
    scanf("%d", &p.jerseyNo);
    getchar();

    printf("Enter Name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    printf("Enter Runs: ");
    scanf("%d", &p.runs);

    printf("Enter Wickets: ");
    scanf("%d", &p.wickets);

    printf("Enter Matches: ");
    scanf("%d", &p.matches);

    fprintf(fp, "%d \"%s\" %d %d %d\n",
            p.jerseyNo, p.name, p.runs, p.wickets, p.matches);

    fclose(fp);
    printf("Player added successfully\n");
}

/* ================= DISPLAY ================= */
void displayPlayers()
{
    FILE *fp = fopen("players.txt", "r");
    struct Player p;

    if (!fp)
    {
        printf("No players found\n");
        return;
    }

    while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                  &p.jerseyNo, p.name,
                  &p.runs, &p.wickets, &p.matches) != EOF)
    {
        printf("Jersey=%d | Name=%s | Runs=%d | Wickets=%d | Matches=%d\n",
               p.jerseyNo, p.name, p.runs, p.wickets, p.matches);
    }

    fclose(fp);
}

/* ================= UPDATE ================= */
void updatePlayer()
{
    FILE *fp = fopen("players.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct Player p;
    int jersey, found = 0;

    if (!fp || !temp)
    {
        printf("File error\n");
        return;
    }

    printf("Enter Jersey No to update: ");
    scanf("%d", &jersey);

    while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                  &p.jerseyNo, p.name,
                  &p.runs, &p.wickets, &p.matches) != EOF)
    {
        if (p.jerseyNo == jersey)
        {
            printf("Enter new Runs Wickets Matches: ");
            scanf("%d %d %d", &p.runs, &p.wickets, &p.matches);
            found = 1;
        }

        fprintf(temp, "%d \"%s\" %d %d %d\n",
                p.jerseyNo, p.name, p.runs, p.wickets, p.matches);
    }

    fclose(fp);
    fclose(temp);

    if (found)
    {
        remove("players.txt");
        rename("temp.txt", "players.txt");
        printf("Player updated\n");
    }
    else
    {
        remove("temp.txt");
        printf("Player not found\n");
    }
}

/* ================= DELETE ================= */
void deletePlayer()
{
    FILE *fp = fopen("players.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct Player p;
    int jersey, found = 0;

    if (!fp || !temp)
    {
        printf("File error\n");
        return;
    }

    printf("Enter Jersey No to delete: ");
    scanf("%d", &jersey);

    while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                  &p.jerseyNo, p.name,
                  &p.runs, &p.wickets, &p.matches) != EOF)
    {
        if (p.jerseyNo == jersey)
        {
            found = 1;
            continue;
        }

        fprintf(temp, "%d \"%s\" %d %d %d\n",
                p.jerseyNo, p.name, p.runs, p.wickets, p.matches);
    }

    fclose(fp);
    fclose(temp);

    if (found)
    {
        remove("players.txt");
        rename("temp.txt", "players.txt");
        printf("Player deleted\n");
    }
    else
    {
        remove("temp.txt");
        printf("Player not found\n");
    }
}

/* ================= SEARCH BY JERSEY ================= */
void searchByJersey()
{
    FILE *fp = fopen("players.txt", "r");
    struct Player p;
    int jersey, found = 0;

    if (!fp)
    {
        printf("No players found\n");
        return;
    }

    printf("Enter Jersey No: ");
    scanf("%d", &jersey);

    while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                  &p.jerseyNo, p.name,
                  &p.runs, &p.wickets, &p.matches) != EOF)
    {
        if (p.jerseyNo == jersey)
        {
            printf("Found: %s | Runs=%d | Wickets=%d | Matches=%d\n",
                   p.name, p.runs, p.wickets, p.matches);
            found = 1;
            break;
        }
    }

    fclose(fp);
    if (!found)
        printf("Player not found\n");
}

/* ================= UTIL ================= */
void toLowerCase(char str[])
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
}

/* ================= SEARCH BY NAME ================= */
void searchByName()
{
    FILE *fp = fopen("players.txt", "r");
    struct Player p;
    char name[50], temp[50];
    int found = 0;

    if (!fp)
    {
        printf("No players found\n");
        return;
    }

    getchar();
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    toLowerCase(name);

    while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                  &p.jerseyNo, p.name,
                  &p.runs, &p.wickets, &p.matches) != EOF)
    {
        strcpy(temp, p.name);
        toLowerCase(temp);

        if (strcmp(temp, name) == 0)
        {
            printf("Found: Jersey=%d | Runs=%d | Wickets=%d | Matches=%d\n",
                   p.jerseyNo, p.runs, p.wickets, p.matches);
            found = 1;
            break;
        }
    }

    fclose(fp);
    if (!found)
        printf("Player not found\n");
}

/* ================= LOAD PLAYERS ================= */
int loadPlayers(struct Player p[])
{
    FILE *fp = fopen("players.txt", "r");
    int n = 0;

    if (!fp)
        return 0;

    if (p != NULL)
    {
        while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                      &p[n].jerseyNo, p[n].name,
                      &p[n].runs, &p[n].wickets, &p[n].matches) != EOF)
            n++;
    }
    else
    {
        struct Player temp;
        while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                      &temp.jerseyNo, temp.name,
                      &temp.runs, &temp.wickets, &temp.matches) != EOF)
            n++;
    }

    fclose(fp);
    return n;
}

/* ================= SORT ================= */
void sortByRuns(struct Player p[], int n)
{
    struct Player temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (p[i].runs < p[j].runs)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
}

/* ================= TOP 3 ================= */
void top3Players()
{
    struct Player p[MAX];
    int n = loadPlayers(p);

    if (n == 0)
    {
        printf("No players found\n");
        return;
    }

    sortByRuns(p, n);

    printf("\nTop 3 by Runs:\n");
    for (int i = 0; i < 3 && i < n; i++)
        printf("%s - %d Runs\n", p[i].name, p[i].runs);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (p[i].wickets < p[j].wickets)
            {
                struct Player temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }

    printf("\nTop 3 by Wickets:\n");
    for (int i = 0; i < 3 && i < n; i++)
        printf("%s - %d Wickets\n", p[i].name, p[i].wickets);
}
