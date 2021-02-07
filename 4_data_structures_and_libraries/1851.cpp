// https://www.urionlinejudge.com.br/judge/pt/problems/view/1851

#include <bits/stdc++.h>

using namespace std;

struct dragon_t {
    int T, F;
};

struct comparator {
    bool operator()(dragon_t const &lhs, dragon_t const &rhs) {
        return ((double) lhs.F / lhs.T) < ((double) rhs.F / rhs.T);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    dragon_t dragon;
    int remaining;
    double fine = 0.0, totalfine = 0.0;
    bool training = false;
    priority_queue<dragon_t, vector<dragon_t>, comparator> Q;

   while (cin >> dragon.T >> dragon.F) {
        Q.push(dragon);
        fine += dragon.F;   

        if (!(training && remaining)) {
            fine -= Q.top().F;
            remaining = Q.top().T;
            training = true;
            Q.pop();
        }
        totalfine += fine;
        --remaining;
    }

    if (training)
        totalfine += remaining * fine;

    while (!Q.empty()) {
        fine -= Q.top().F;
        totalfine += fine * Q.top().T;
        Q.pop();
    }

    cout << fixed << setprecision(0) << totalfine << "\n";

    return 0;
}
