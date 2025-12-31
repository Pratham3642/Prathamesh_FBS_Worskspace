#include <stdio.h>

// Find minimum and maximum number in array

int findMinMax(int *ptr, int n)
{
    int min, max;
    min = ptr[0];
    max = ptr[0];

    for (int i = 0; i < n; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }

        if (ptr[i] < min)
        {
            min = ptr[i];
        }
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);
}

void main()
{
    int arr[10], n = 10;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    findMinMax(arr, n);
}

// Search the given number in array.

int search(int *arr, int key, int n)
{
    int found = 0;
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
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 11, 22, 33, 44, 55};
    int key, n = 15;
    printf("Enter no. to Search: ");
    scanf("%d", &key);

    search(arr, key, n);
}

// Find sum of all numbers.
int add(int *, int);
int main()
{
    int arr[5];
    int n = 5;
    printf("Enter numbers to sum : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Total Sum = %d", add(arr, n));
    return 0;
}
int add(int *ptr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ptr[i];
    }
    return sum;
}

// Find odd and even among the numbers.
void printEven(int *, int);
void printOdd(int *, int);
void main()
{
    int arr[5];
    int n = 5;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    printEven(arr, n);
    printf("\n");
    printOdd(arr, n);
}

void printEven(int *ptr, int n)
{
    printf("Even numbers : ");
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            printf("%d ", ptr[i]);
        }
    }
}
void printOdd(int *ptr, int n)
{
    printf("Odd numbers : ");
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] % 2 != 0)
        {
            printf("%d ", ptr[i]);
        }
    }
}

// print only prime numbers of array.
void printPrime(int *, int);
int main()
{
    int arr[10], n = 10;
    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printPrime(arr, n);
}
void printPrime(int *arr, int n)
{
    printf("Prime numbers: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 1)
            continue;

        int isPrime = 1;
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

// Reverse the given array.
void reverse(int *, int);
int main()
{
    int arr[5], rev[5];
    int i, n = 5;

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    printf("Reversed Array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void reverse(int *arr, int n)
{
    int left = 0, end = n - 1;
    while (left < end)
    {
        int temp = arr[left];
        arr[left] = arr[end];
        arr[end] = temp;
        left++;
        end--;
    }
}

// sort the array
void sort(int *, int);
int main()
{
    int arr[5], n = 5;
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    printf("Sorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void sort(int *arr, int n)
{
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
}