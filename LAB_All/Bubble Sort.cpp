#include <iostream>
using namespace std;
void BubbleSort(int array[], int size) {
    int i, j;
    bool swp;
    for (i = 0; i < size - 1; i++) {
        swp = false;
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                swp = true;
            }
        }
        if (swp == false)
            break;
    }
}
void BubbleSolve(int array[], int size) {
    for (int i = 0; i < size; i++)
        cout << " " << array[i];
}
int main() {
    int arrSize;
    cout << "Enter the number of Elements : ";
    cin >> arrSize;

    int numbers[arrSize];
    cout << "Enter the Elements : ";
    for (int i = 0; i < arrSize; i++)
        cin >> numbers[i];
   BubbleSort(numbers, arrSize);
    
    cout << "Sorted array: ";
    BubbleSolve(numbers, arrSize);
    
    return 0;
}