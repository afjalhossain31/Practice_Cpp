#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp(high - low + 1);
    long long inv_count = 0;
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1);
        }
    }
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= high) {
        temp[k++] = arr[j++];
    }

    for (int i = low, k = 0; i <= high; ++i, ++k) {
        arr[i] = temp[k];
    }

    return inv_count;
}

long long mergeSort(vector<int>& arr, int low, int high) {
    long long inv_count = 0;
    if (low < high) {
        int mid = (low + high) / 2;
        inv_count += mergeSort(arr, low, mid);
        inv_count += mergeSort(arr, mid + 1, high);
        inv_count += merge(arr, low, mid, high);
    }
    return inv_count;
}
int main() {
    int t;
   cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        long long inversions = mergeSort(arr, 0, n - 1);
        cout << inversions <<endl;
    }
    return 0;
}

