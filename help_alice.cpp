#include <bits/stdc++.h>
using namespace std;

long long f(long long n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    long long l, r;
    cin >> l >> r;

    long long x = f(r) ^ f(l - 1);

    if (x % 2 == 0) cout << "even";
    else cout << "odd";

    return 0;
}