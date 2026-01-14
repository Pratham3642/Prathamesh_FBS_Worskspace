#include <stdio.h>
#include <stdlib.h>

// Find minimum and maximum number in array
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc((n * sizeof(int)));
    int min, max;

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);

    free(arr); // ✅ Free allocated memory
    return 0;
}