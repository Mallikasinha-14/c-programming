#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int st, int end)
{
    int pivot = arr[end];

    int i = st - 1;

    for(int j = st; j < end; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[end]);

    return i + 1;
}

void quicksort(int arr[], int st, int end)
{
    if(st < end)
    {
        int pi = partition(arr, st, end);

        quicksort(arr, st, pi - 1);
        quicksort(arr, pi + 1, end);
    }
}

int main()
{
    int arr[200] = {4, 47, 474, 747, 7};
    int n = 5;

    quicksort(arr, 0, n - 1);

    printf("Sorted array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
