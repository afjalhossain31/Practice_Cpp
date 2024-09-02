#include <iostream>
#include <vector>
using namespace std;

const int MOD = 100000007;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int n, K;
        cin >> n >> K;
        vector<int> A(n), C(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> C[i];

        vector<int> ways(K + 1, 0);
        ways[0] = 1; // base case: one way to make 0

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= K; j++) {
                for (int k = 1; k <= C[i] && k * A[i] + j <= K; k++) {
                    ways[j + k * A[i]] = (ways[j + k * A[i]] + ways[j]) % MOD;
                }
            }
        }

        cout << "Case " << t << ": " << ways[K] << endl;
    }
    return 0;
}
