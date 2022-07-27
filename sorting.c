#include <stdio.h>
// Insertion Sort
void insert(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
}
// Selection sort
void selection(int arr[], int n)
{
    int small;
    for (int i = 0; i < n - 1; i++)
    {
        small = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
                small = j; // storing minimum elment in a segment
        }

        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }
}

// Bubble Sort
void bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Merge Sort
void merge(int a[], int start, int mid, int end)
{
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = a[start + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    i = 0;
    j = 0;
    k = start;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k++] = L[i++];
        }
        else
        {
            a[k++] = R[j++];
        }
    }
    while (i < n1)
    {
        a[k++] = L[i++];
    }

    while (j < n2)
        start
        {
            a[k++] = R[j++];
        }
}

void mergeSort(int a[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    insert(a, n);
    printf("Sorted array by insertion sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    selection(a, n);
    printf("Sorted Array by selsction sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    bubble(a, n);
    printf("Sorted array by bubble sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    mergeSort(a, 0, n - 1);
    printf("Sorted Array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}