#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int result;

    int x=-5;
   //abs()
    abs(x);
    result =abs(x);
    cout<<"Absolute : "<< result<<endl;

    //acos(),asin(),aten()
    double y=1.0;
    result =acos(y);
    cout<<endl<<"Acose ="<<result <<" redians";
    cout<<endl<<"Acose ="<<result * 180/3.1416 <<" degree";

    //cbrt()
    int a=30;
    result =cbrt(a);
    cout<< endl<<"Cube root of "<<a<<"="<<result;

    

    return 0;
}