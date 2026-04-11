#include <bits/stdc++.h>
using namespace std;

long long countPairs(long long n) {
    int distinctPrimes = 0;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            distinctPrimes++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n > 1) distinctPrimes++; // remaining prime

    return 1LL << distinctPrimes; // 2^k
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << countPairs(n) << "\n";
    }

    return 0;
}