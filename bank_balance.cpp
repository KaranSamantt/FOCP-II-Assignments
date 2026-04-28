#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    map<int, long long> acc;

    while (Q--) {
        string op;
        cin >> op;

        if (op == "CREATE") {
            int x; long long y;
            cin >> x >> y;
            if (acc.count(x)) {
                acc[x] += y;
                cout << "false\n";
            } else {
                acc[x] = y;
                cout << "true\n";
            }
        }
        else if (op == "DEBIT") {
            int x; long long y;
            cin >> x >> y;
            if (!acc.count(x) || acc[x] < y) {
                cout << "false\n";
            } else {
                acc[x] -= y;
                cout << "true\n";
            }
        }
        else if (op == "CREDIT") {
            int x; long long y;
            cin >> x >> y;
            if (!acc.count(x)) {
                cout << "false\n";
            } else {
                acc[x] += y;
                cout << "true\n";
            }
        }
        else if (op == "BALANCE") {
            int x;
            cin >> x;
            if (!acc.count(x)) cout << -1 << "\n";
            else cout << acc[x] << "\n";
        }
    }
}