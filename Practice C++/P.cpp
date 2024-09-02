#include <iostream>
#include <algorithm>
using namespace std;

int income()
{
    int buns, beef, chicken;
    cin >> buns >> beef >> chicken;
    int h, c, income = 0;
    cin >> h >> c;

    if (h > c)
    {
        if ((buns / 2) >= beef)
        {
            if (((buns / 2) - beef) >= chicken)
            {
                income = (beef * h) + (chicken * c);
            }
            else
            {
                income = (beef * h) + (((buns / 2) - beef) * c);
            }
        }
        else
        {
            income = ((buns / 2) * h);
        }
    }
    else
    {
        if ((buns / 2) >= chicken)
        {
            if (((buns / 2) - chicken) >= beef)
            {
                income = (chicken * c) + (beef * h);
            }
            else
            {
                income = (chicken * c) + (((buns / 2) - chicken) * h);
            }
        }
        else
        {
            income = ((buns / 2) * c);
        }
    }

    return income;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cout << income() << endl;
    }

    return 0;
}
