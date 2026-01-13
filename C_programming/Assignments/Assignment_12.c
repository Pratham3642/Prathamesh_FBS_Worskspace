#include <stdio.h>
#include <string.h>

// //Search a Character in a String
// int main()
// {
//     char str[50];
//     char ch;
//     printf("Enter a string : ");
//     fgets(str, 50, stdin);

//     printf("Enter a charater to search : ");
//     scanf(" %c", &ch);

//     char *result = strchr(str, ch);
//     if (result != NULL)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found\n", ch);
//     return 0;
// }

// // Replace all 'a' with $
// int main()
// {
//     char str[20];

//     printf("Enter a string : ");
//     fgets(str, sizeof(str), stdin);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a')
//         {
//             str[i] = '$';
//         }
//     }
//     printf("Modified string: %s", str);

//     return 0;
// }

// //Remove the nth Index Character
// int main()
// {
//     char str[50];
//     int index;
//     printf("Enter a string : ");
//     fgets(str, 50, stdin);

//     printf("Enter a index to remove: ");
//     scanf("%d", &index);

//     for (int i = index; str[i] != '\0'; i++)
//     {
//         str[i] = str[i + 1];
//     }
//     printf("String after removal: %s", str);

//     return 0;
// }

// /*Form a New String where the First Character and the
// Last Character have been Exchanged*/
// int main()
// {

//     char str[40];
//     char new[40];
//     int len, i;
//     char c1, c2;

//     printf("Enter a String: ");
//     fgets(str, 40, stdin);

//     len = strlen(str); //trims new line
//     if (str[len - 1] == '\n')
//     {
//         str[len - 1] = '\0';
//         len--;
//     }

//     c1 = str[0];
//     c2 = str[len - 1];
//     new[0] = c2;

//     for (i = 1; i < len - 1; i++)
//     {
//         new[i] = str[i];
//     }

//     new[i] = c1;
//     new[i + 1] = '\0';

//     printf("Exchanged string :%s", new);

//     return 0;
// }

// //Count Vowels in a String
// int main()
// {
//     int count = 0, i;
//     char str[20];

//     printf("Enter a string : ");
//     fgets(str, sizeof(str), stdin);
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if (strchr("aeiouAEIOU", str[i]) != NULL)
//             count++;
//     }
//     printf("Vowels =  %d", count);
//     return 0;
// }

// //Replace Every Blank Space with special symbol.
// int main()
// {
//     char str[100];
//     char symbol;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("Enter a symbol to replace the space: ");
//     scanf(" %c", &symbol);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ' ')
//         {
//             str[i] = symbol;
//         }
//     }

//     printf("Modified string : %s", str);

//     return 0;
// }

// // Remove the Characters of Odd Index Values in a String
// int main()
// {
//     char str[100];
//     int i, j = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if (i % 2 == 0)
//         {
//             str[j] = str[i];
//             j++;
//         }
//     }
//     str[j] = '\0';

//     printf("Modified string: %s", str);
//     return 0;
// }

// //Count the Number of Words in a String
// int main()
// {
//     char str[100];
//     int i, count = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
//         {
//             count++;
//         }
//     }

//     if (str[0] != ' ' && str[0] != '\n')
//         count++;

//     printf("Number of words = %d", count);
//     return 0;
// }

// //Compare the Length of Two Strings and Display the Larger String
// int main()
// {
//     char str1[100], str2[100];
//     int i, len1 = 0, len2 = 0;

//     printf("Enter first string: ");
//     fgets(str1, sizeof(str1), stdin);

//     printf("Enter second string: ");
//     fgets(str2, sizeof(str2), stdin);

//     for (i = 0; str1[i] != '\0'; i++)
//     {
//         if (str1[i] != '\n')
//             len1++;
//     }

//     for (i = 0; str2[i] != '\0'; i++)
//     {
//         if (str2[i] != '\n')
//             len2++;
//     }

//     if (len1 > len2)
//         printf("Larger string is: %s", str1);
//     else if (len2 > len1)
//         printf("Larger string is: %s", str2);
//     else
//         printf("Both strings are of equal length");

//     return 0;
// }

int main()
{
    char str1[20];
    char rev[20];

    printf("Enter a string to check palindrome: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    strcpy(rev, str1);
    strrev(rev);
    if (strcmp(str1, rev) == 0)
    {
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }
}