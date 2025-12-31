#include <stdio.h>

// print common elements
void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {1, 6, 7, 3, 2};
    printf("Common Elements:");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == brr[j])
            {
                printf(" %d", arr[i]);
            }
        }
    }
}

// find the second largest
int main()
{
    int arr[10];
    int max, secondMax;

    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    secondMax = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d", secondMax);

    return 0;
}
