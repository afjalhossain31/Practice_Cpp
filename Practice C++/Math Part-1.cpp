#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int x = 10;
    int y = 40;
    int z=25;
    double value=2.55;
    int a=10;
    int result;

    result = max(x, y);
    cout << "maximum Value :"<<result<<endl; 

    result =min(x,y);
    cout << "Minimum Value :"<<result<<endl; 

    result =sqrt(z);
    cout << "Sqrt Value :"<<result<<endl;

    result =round(value);
    cout << "Round Function Value :"<<result<< endl;

    result =log(a);
    cout << "Log 10 Value :"<<result<< endl;

    return 0;
}
