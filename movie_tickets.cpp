#include <bits/stdc++.h>
using namespace std;

class MovieTicket {
    map<int, set<int>> booked;
    int CAP = 100;

public:
    string book(int x, int y) {
        if (booked[y].count(x)) return "false";
        if (booked[y].size() >= CAP) return "false";

        booked[y].insert(x);
        return "true";
    }

    string cancel(int x, int y) {
        if (booked[y].count(x) == 0) return "false";

        booked[y].erase(x);
        return "true";
    }

    string is_booked(int x, int y) {
        if (booked[y].count(x)) return "true";
        return "false";
    }

    int available(int y) {
        return CAP - booked[y].size();
    }
};

int main() {
    int Q;
    cin >> Q;

    MovieTicket mt;

    while (Q--) {
        string op;
        cin >> op;

        if (op == "BOOK") {
            int x, y;
            cin >> x >> y;
            cout << mt.book(x, y) << endl;
        }
        else if (op == "CANCEL") {
            int x, y;
            cin >> x >> y;
            cout << mt.cancel(x, y) << endl;
        }
        else if (op == "IS_BOOKED") {
            int x, y;
            cin >> x >> y;
            cout << mt.is_booked(x, y) << endl;
        }
        else if (op == "AVAILABLE_TICKETS") {
            int y;
            cin >> y;
            cout << mt.available(y) << endl;
        }
    }
}