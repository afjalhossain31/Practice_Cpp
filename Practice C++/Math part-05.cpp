#include<iostream>
#include<cmath>
using namespace std;

int main(){
   
    double x=56.43,result;
    int y=94;
    result =fmax(x,y);
    cout <<"fmax(x,y) ="<< result <<endl;

    double z=56.43;
    int w=-94;
    result =fmin(z,w);
    cout <<"fmin(x,y) ="<< result <<endl;
   
    double p=-17.50;
    double q=2.0;
    result =fmod(p,q);
    cout <<"fmod(x,y) ="<< result <<endl;
    cout<<"Remainder of"<<p<<"/"<<q<<" = "<<result<<endl;


        return 0;
}