#include <bits/stdc++.h>
using namespace std;

int n, k;
string bulbs;

// Check if a given l works
bool check(int l) {
    int operations = 0;
    int i = 0;

    while (i < n) {
        if (bulbs[i] == '0') {
            i++;
        } else {
            operations++;
            i += l;

            if (operations > k)
                return false;
        }
    }

    return operations <= k;
}

int main() {
    cin >> n >> k;
    cin >> bulbs;

    for (int l = 1; l <= n; l++) {
        if (check(l)) {
            cout << l << endl;
            break;
        }
    }

    return 0;
}