
#include<iostream>

using namespace std;

int main() {
    int n, k;
    while (cin >> n >> k) {
        int total = 0;
        int butts = 0;
        while (n > 0) {
            total += n;
            butts += n;
            n = butts / k;
            butts %= k;
        }
        cout << total << endl;
    }
    return 0;
}
