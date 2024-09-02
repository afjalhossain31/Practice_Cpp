#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int b, p, f;
        cin >> b >> p >> f;
        int h, c;
        cin >> h >> c;

        int max_hamburgers = min(b / 2, p);
        int max_chicken_burgers = min((b - 2 * max_hamburgers) / 2, f);

        int max_income = max_hamburgers * h + max_chicken_burgers * c;
        cout << max_income << endl;
    }

    return 0;
}
