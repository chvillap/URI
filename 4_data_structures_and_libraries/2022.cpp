// https://www.urionlinejudge.com.br/judge/en/problems/view/2022

#include <bits/stdc++.h>

using namespace std;

typedef tuple<string, float, int> gift;

struct comparator
{
    bool operator()(gift const &lhs, gift const &rhs)
    {
        if (get<2>(lhs) == get<2>(rhs)) {
            if (get<1>(lhs) == get<1>(rhs)) {
                return get<0>(lhs) > get<0>(rhs);
            }
            return get<1>(lhs) > get<1>(rhs);
        }
        return get<2>(lhs) < get<2>(rhs);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string name, object;
    int Q, E;
    float P;

    while (cin >> name >> Q) {
        priority_queue<gift, vector<gift>, comparator> pq;

        for (int i = 0; i < Q; ++i) {
            cin.ignore();
            getline(cin, object);
            cin >> P >> E;
            pq.push(make_tuple(object, P, E));
        }

        cout << "Lista de " << name << "\n";

        while (!pq.empty()) {
            gift g(pq.top());
            cout << get<0>(g)
                 << " - R$" << fixed << setprecision(2) << get<1>(g)
                 << "\n";
            pq.pop();
        }
        cout << "\n";
    }

    return 0;
}
