#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int buns, beef_patties, chicken_cutlets;
        cin >> buns >> beef_patties >> chicken_cutlets;
        int h, c;
        cin >> h >> c;

        int max_income = 0;

        for (int i = 0; i <= beef_patties; ++i)
        {
            for (int j = 0; j <= chicken_cutlets; ++j)
            {
                if (2 * i + 2 * j <= buns)
                {
                    int income = i * h + j * c;
                    max_income = max(max_income, income);
                }
            }
        }
        cout << max_income << endl;
    }

}
