#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n - 1], c[n - 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        cin >> c[i];
    }
    int m1, m2;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            m1 = a[i];
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 2; j++)
        {
            if (b[i] == c[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            m2 = b[i];
            break;
        }
    }
    cout << m1 << " " << m2 << endl;
    return 0;
}
