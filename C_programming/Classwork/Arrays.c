#include <stdio.h>

int main()
{
    int arr[5], brr[7], crr[3];
    int i;

    printf("Enter elements of first array (5 elements):\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter elements of second array (7 elements):\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &brr[i]);
    }

    printf("Enter elements of third array (3 elements):\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &crr[i]);
    }
    printf("\n");
    printf("arr : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("brr : ");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", brr[i]);
    }
    printf("\n");
    printf("crr : ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}