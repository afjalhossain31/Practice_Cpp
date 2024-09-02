#include<iostream>
 using namespace std;

 int main(){

     int n1,n2,n3;

     cout<< "Enter the lengths of three n of triangle: ";

     cin >> n1>>n2>>n3;

     if( n1==n2 && n2==n3){
        cout << " equilateral triangle"<<endl;
     }else if(n1==n2 || n2==n3 ||n1==n3){
         cout << "isosceles triagle"<< endl;
     }else{
         cout << "Scalene triangle" <<endl;
     }

     return 0;
 }
