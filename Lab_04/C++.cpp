#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    int score = a[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= score && a[i] > 0)
        {
            flag++;
        }
        else
        {
            break;
        }
    }
    cout << flag << endl;
    return 0;
}
