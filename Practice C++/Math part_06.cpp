#include<iostream>
#include<cmath>
using namespace std;

int main() {
     double x = -3;
     double result;
    result = sinh(x); 
    cout << "sinh(x) = " << result << endl;

    double xDegrees= 90;
    x= xDegrees*3.14159/180;
    result =tanh(x);
    cout<< "tanh(x)  ="<<result<<endl;

    

    return 0;
}
