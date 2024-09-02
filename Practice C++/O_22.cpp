#include<iostream>

using namespace std;

int main(){

    //int size =5;
    int array[5];
    int i;
    cout << "Enter 5 Elements into the array:"<<endl;

    for( i=0;i<5;i++){
        cin >> array[i];
    }
    cout << "Elements is the array are:";

    for( i=0;i<5;i++){
        cout <<array[i]<< " ";
    }

    return 0;
}

