#include <iostream>
using namespace std;
int main()
{
    int a[4];
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < 4; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (max != a[i])
        {
            int quiz = max - a[i];
            cout << quiz << " ";
        }
    }
    return 0;
}

