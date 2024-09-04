#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    int i, num, j;
    for (i = 1; i < n; i++) {
        num = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > num) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = num;
    }
}
void insertionSolve(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int N;
    cout << "Enter the number of Elements: ";
    cin >> N;

    int arr[N];
    cout << "Enter the Elements: ";
    for (int i = 0; i < N; i++){
          cin >> arr[i];
    }

    insertionSort(arr, N);
    cout << "Sorted array: ";
    insertionSolve(arr, N);
    return 0;
}
