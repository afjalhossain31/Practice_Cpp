#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    int add = 0;
    for (int i = 0; i < size; i++) {
        add += arr[i];
    }
    return add;
}

int main() {
    int arr[5];
    cout << "Enter your 5 product prices: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i]; 
    }
    int total = sum(arr, 5); 
    cout << "Total sum of product prices: " << total << endl;
    return 0;
}




/*

// Basic Functions 
int displayArr(int arr[],int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
     int arr[5]={1,2,3,4,5};
     displayArr(arr,5);
}
*/