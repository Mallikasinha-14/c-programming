#include <stdio.h>

void merge(int arr[], int st, int mid, int end)
{
    int i = st;
    int j = mid + 1;
    int k = 0;

    int temp[end - st + 1];

    while(i <= mid && j <= end)
    {
        if(arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(i = st, k = 0; i <= end; i++, k++)
    {
        arr[i] = temp[k];
    }
}

void mergesort(int arr[], int st, int end)
{
    if(st < end)
    {
        int mid = (st + end) / 2;

        mergesort(arr, st, mid);
        mergesort(arr, mid + 1, end);

        merge(arr, st, mid, end);
    }
}

int main()
{
    int arr[] = {25,26,57,56};
    int n = 4;

    mergesort(arr, 0, n - 1);

    printf("Sorted array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
