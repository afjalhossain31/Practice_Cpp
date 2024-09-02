#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, a, max;
    vector<int> b;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        b.clear();

        for (int  j = 0; j < a; j++)
        {
            int speed;
            cin >> speed;
            b.push_back(speed);
        }
        max = b[0];
        for (int j = 1; j < a; j++)
        {
            if (max <= b[j])
            {
                max = b[j];
            }
        }
        cout << "Case "<<i<< ": "<< max << endl;
    }
    return 0;
}
