#include<iostream>

using namespace std;
int main(){
    int n,k, c=0;
    cout<< "enter the number: ";
    cin>>n>>k;
    int arr[n];
    int i=0;

    while(i<n){
        cin>>arr[i];
        if(arr[i] >=arr[4] && arr[i]>0){
            c++;
        }
        i++;
    }

    cout<<c<<endl;

    return 0;
}
