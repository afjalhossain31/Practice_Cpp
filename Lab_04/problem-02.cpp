#include<iostream>

using namespace std;

int main() {
    int n, c = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_value = arr[0]; // Initialize max_value with the first element of the array

    for (int i = 0; i < n; i++) {
        if (arr[i] >= max_value && arr[i] > 0) { // Compare each element with max_value
            c++;
            max_value = arr[i]; // Update max_value if arr[i] is greater
        }
    }

    cout << c << endl;

    return 0;
}
