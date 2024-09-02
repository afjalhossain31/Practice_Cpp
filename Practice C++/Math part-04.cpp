#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int num1= 500, num2=30, rent;
   int num3= 10, num4=30, ren;//example

   rent=fdim(num3,num4);
   cout <<ren<<endl;
   //num1-num2
   rent=fdim(num1,num2);
   cout <<rent<<endl;

    int num=3.76;
    int result=floor(num);
    cout<<"Floor of = "<<result;

    //hypot(x,y) important

    double num5=10,num6=30,res;
    res=hypot(num5,num6);
    cout<<"result of three paarameter: "<<res << endl;


    double a=2.4,b=4.2,c=6.5,ans;
    ans=fma(a,b,c);
    cout<<"ans of three paarameter: "<<ans << endl;




    return 0;
}