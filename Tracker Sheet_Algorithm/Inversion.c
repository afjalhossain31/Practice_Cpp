#include <stdio.h>
#include <stdlib.h>

long long merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int *left = (int*)malloc(n1 * sizeof(int));
    int *right = (int*)malloc(n2 * sizeof(int));
    long long inv_count = 0;
    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else {
            arr[k++] = right[j++];
            inv_count += (mid - low + 1 - i);
        }
    }

    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];

    free(left);
    free(right);

    return inv_count;
}

long long mergeSort(int arr[], int low, int high) {
    long long inv_count = 0;
    if (low < high) {
        int mid = low + (high - low) / 2;
        inv_count += mergeSort(arr, low, mid);
        inv_count += mergeSort(arr, mid + 1, high);
        inv_count += merge(arr, low, mid, high);
    }
    return inv_count;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int *arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }
        long long inversions = mergeSort(arr, 0, n - 1);
        printf("%lld\n", inversions);
        free(arr);
    }
    return 0;
}

