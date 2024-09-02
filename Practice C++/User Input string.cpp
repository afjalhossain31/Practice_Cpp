#include<iostream>
#include<string>
using namespace std;

int main(){

    string firstName;
    cout<< "Enter your first name: ";
    getline(cin,firstName);

  //  cin>>firstName;

    cout <<endl<< " My full name: "<< firstName;

    return 0;
}