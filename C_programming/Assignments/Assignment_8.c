#include <stdio.h>

// Find minimum and maximum number in array
void main()
{
    int arr[10];
    int min, max;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < 10; i++)
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
}

// Search the given number in array.
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 11, 22, 33, 44, 55};
    int key, found = 0, n = 15;
    printf("Enter no. to Search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at position: %d", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Element not found!!");
    }
}

// Find sum of all numbers.
int main()
{
    int arr[5];
    int sum = 0, n = 5;
    printf("Enter numbers to sum : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Total Sum = %d", sum);
    return 0;
}

// Find odd and even among the numbers.
void main()
{
    int arr[5];
    int n = 5;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    printf("Even numbers : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("Odd numbers : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

// Print alternate elements in array.
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 11, 22, 33, 44, 55};
    int n = 15;
    printf("Alternate Element: ");
    for (int i = 0; i < n; i += 2)
    {
        printf("%d ", arr[i]);
    }
}

// print only prime numbers of array.
int main()
{
    int arr[10], n = 10;
    int isPrime;
    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 1)
            continue;

        isPrime = 1;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d ", arr[i]);
        }
    }
}

// Take two array and add sum in third array
int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("Sum of array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}

// Merge two arrays
int main()
{
    int n1, n2, i;

    printf("Enter size of First array: ");
    scanf("%d", &n1);

    printf("Enter size of Second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], merge[n1 + n2];

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        merge[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        merge[n1 + i] = arr2[i];
    }

    printf("Merged array : ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merge[i]);
    }
    return 0;
}

// Reverse the given array.
int main()
{
    int arr[5], rev[5];
    int i, n = 5;

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for (i = 0; i < n; i++)
    // {
    //     rev[i] = arr[n - 1 - i]; // takes the elements from the end
    //                              // e.g. if i=0 then (5-1-0)becomes 4 that is last element since our i starts from 0
    //                              // if i=1 then (5-1-1) = 3 that is 2nd last
    // }
    int left = 0, end = n - 1;
    while (left < end)
    {
        int temp = arr[left];
        arr[left] = arr[end];
        arr[end] = temp;
        left++;
        end--;
    }
    printf("Reversed Array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// sort the array
int main()
{
    int arr[5], n = 5;
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // After each iteration, the sorting range is reduced (n - i) because the
        // largest element is placed at the end, so there is no need to check it again.
        for (int j = 1; j < n - i; j++)
        {
            // each iteration takes the largest element to end by swapping with adjacent element
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    printf("Sorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}