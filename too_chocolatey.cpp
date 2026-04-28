#include<bits/stdc++.h>
using namespace std;

string solve (int n, vector<int> arr) {
    // remove duplicates
    set<int> s(arr.begin(), arr.end());

    // move to vector
    vector<int> v(s.begin(), s.end());

    // sort descending
    sort(v.begin(), v.end(), greater<int>());

    long long alex = 0, bob = 0;

    for (int i = 0; i < v.size(); i++) {
        if (i % 2 == 0) alex += v[i];
        else bob += v[i];
    }

    return (alex > bob) ? "Alex" : "Bob";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << solve(n, arr) << "\n";
    }
}