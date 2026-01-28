#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Player
{
    int jerseyNo;
    char name[50];
    int runs;
    int wickets;
    int matches;
};

/* Function declarations */
void addPlayer();
void displayPlayers();
void updatePlayer();
void deletePlayer();
void searchPlayerByJersey();
void searchPlayerByName();
void countPlayers();
void sortPlayersByRuns();
void top3Players();

/* ===================== MAIN ===================== */
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
        printf("5. Search Player by Jersey\n");
        printf("6. Search Player by Name\n");
        printf("7. Count Players\n");
        printf("8. Sort Players by Runs\n");
        printf("9. Top 3 Players (Runs & Wickets)\n");
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
            searchPlayerByJersey();
            break;
        case 6:
            searchPlayerByName();
            break;
        case 7:
            countPlayers();
            break;
        case 8:
            sortPlayersByRuns();
            break;
        case 9:
            top3Players();
            break;
        case 10:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}

/* ===================== ADD PLAYER ===================== */
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

    printf("Enter Player Name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    printf("Enter Runs: ");
    scanf("%d", &p.runs);

    printf("Enter Wickets: ");
    scanf("%d", &p.wickets);

    printf("Enter Matches Played: ");
    scanf("%d", &p.matches);

    fprintf(fp, "%d \"%s\" %d %d %d\n",
            p.jerseyNo, p.name, p.runs, p.wickets, p.matches);

    fclose(fp);
    printf("Player added successfully\n");
}

/* ===================== DISPLAY PLAYERS ===================== */
void displayPlayers()
{
    FILE *fp = fopen("players.txt", "r");
    struct Player p;

    if (!fp)
    {
        printf("No players found\n");
        return;
    }

    printf("\n--- Player List ---\n");
    while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                  &p.jerseyNo, p.name,
                  &p.runs, &p.wickets, &p.matches) != EOF)
    {
        printf("Jersey=%d | Name=%s | Runs=%d | Wickets=%d | Matches=%d\n",
               p.jerseyNo, p.name, p.runs, p.wickets, p.matches);
    }
    fclose(fp);
}

/* ===================== UPDATE PLAYER ===================== */
void updatePlayer()
{
    FILE *fp = fopen("players.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    struct Player p;
    int jersey, found = 0;

    if (fp == NULL || temp == NULL)
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
            found = 1;
            printf("Enter new Runs Wickets Matches: ");
            scanf("%d %d %d", &p.runs, &p.wickets, &p.matches);
        }

        fprintf(temp, "%d \"%s\" %d %d %d\n",
                p.jerseyNo, p.name,
                p.runs, p.wickets, p.matches);
    }

    fclose(fp);
    fclose(temp);

    if (found)
    {
        remove("players.txt");
        rename("temp.txt", "players.txt");
        printf("Player updated successfully\n");
    }
    else
    {
        remove("temp.txt");
        printf("Player not found\n");
    }
}

/* ===================== DELETE PLAYER ===================== */
void deletePlayer()
{
    FILE *fp = fopen("players.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    struct Player p;
    int jersey, found = 0;

    if (fp == NULL || temp == NULL)
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
                p.jerseyNo, p.name,
                p.runs, p.wickets, p.matches);
    }

    fclose(fp);
    fclose(temp);

    if (found)
    {
        remove("players.txt");
        rename("temp.txt", "players.txt");
        printf("Player deleted successfully\n");
    }
    else
    {
        remove("temp.txt");
        printf("Player not found\n");
    }
}

/* ===================== SEARCH BY JERSEY ===================== */
void searchPlayerByJersey()
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

/* ===================== SEARCH BY NAME ===================== */

/* ---------------- to convert to lowercase ------------- */

void toLowerCase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}

void searchPlayerByName()
{
    FILE *fp = fopen("players.txt", "r");
    struct Player p;
    char name[50];
    int found = 0;

    if (fp == NULL)
    {
        printf("No players found\n");
        return;
    }

    getchar();
    printf("Enter Player Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    toLowerCase(name);

    while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                  &p.jerseyNo, p.name,
                  &p.runs, &p.wickets, &p.matches) != EOF)
    {
        toLowerCase(p.name);

        if (strcmp(p.name, name) == 0)
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

/* ===================== COUNT PLAYERS ===================== */
void countPlayers()
{
    FILE *fp = fopen("players.txt", "r");
    struct Player p;
    int count = 0;

    if (!fp)
    {
        printf("No players found\n");
        return;
    }

    while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                  &p.jerseyNo, p.name,
                  &p.runs, &p.wickets, &p.matches) != EOF)
        count++;

    fclose(fp);
    printf("Total Players: %d\n", count);
}

/* ===================== SORT BY RUN ===================== */
void sortPlayersByRuns()
{
    FILE *fp = fopen("players.txt", "r");
    struct Player p[100], temp;
    int n = 0;

    if (!fp)
    {
        printf("No players found\n");
        return;
    }

    n = countPlayers();

    fclose(fp);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (p[i].runs < p[j].runs)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }

    printf("\nPlayers Sorted by Runs:\n");
    for (int i = 0; i < n; i++)
        printf("%s - %d Runs\n", p[i].name, p[i].runs);
}

/* ===================== TOP 3 PLAYERS ===================== */
void top3Players()
{
    FILE *fp = fopen("players.txt", "r");
    struct Player p[100], temp;
    int n = 0;

    if (!fp)
    {
        printf("No players found\n");
        return;
    }

    while (fscanf(fp, "%d \"%[^\"]\" %d %d %d",
                  &p[n].jerseyNo, p[n].name,
                  &p[n].runs, &p[n].wickets, &p[n].matches) != EOF)
        n++;

    fclose(fp);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (p[i].runs < p[j].runs)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }

    printf("\nTop 3 Players by Runs:\n");
    for (int i = 0; i < 3 && i < n; i++)
        printf("%s - %d Runs\n", p[i].name, p[i].runs);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (p[i].wickets < p[j].wickets)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }

    printf("\nTop 3 Players by Wickets:\n");
    for (int i = 0; i < 3 && i < n; i++)
        printf("%s - %d Wickets\n", p[i].name, p[i].wickets);
}
