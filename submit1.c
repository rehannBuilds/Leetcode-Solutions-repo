#include <stdio.h>
#include <time.h>

long long count = 0;

void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1];

    while (i <= mid && j <= high)
    {
        count++;

        if (a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }

        k++;
    }

    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (i = low, k = 0; i <= high; i++, k++)
        a[i] = temp[k];
}

void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nArray before sorting: ");
    printArray(a, n);

    clock_t start = clock();

    mergeSort(a, 0, n - 1);

    clock_t end = clock();

    printf("Array after sorting: ");
    printArray(a, n);

    double time_taken = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;

    printf("Number of comparisons: %lld\n", count);
    printf("Execution time: %.6f ms\n", time_taken);

    return 0;
}