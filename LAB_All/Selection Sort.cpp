#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void SelectionSolve(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {5, 10, 3, 8, 12, 7, 6, 1, 2, 4 , 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);
    cout << "Sorted array: \n";
    SelectionSolve(arr, n);
    return 0;
}
