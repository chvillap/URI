// https://www.urionlinejudge.com.br/judge/en/problems/view/2370

#include <bits/stdc++.h>

using namespace std;

struct comp1
{
    bool operator()(const pair<string, int> &lhs,
                    const pair<string, int> &rhs) const
    {
        return lhs.second < rhs.second;
    }
};

struct comp2
{
    bool operator()(const string &lhs, const string &rhs) const
    {
        return lhs > rhs;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, T, H, i;
    string name;
    priority_queue<pair<string, int>, vector<pair<string, int> >, comp1> pq;
    priority_queue<string, vector<string>, comp2> teams[1000];

    cin >> N >> T;

    for (i = 0; i < N; ++i) {
        cin >> name >> H;
        pq.push(make_pair(name, H));
    }

    i = 0;
    while (!pq.empty()) {
        teams[i].push(pq.top().first);
        pq.pop();
        i = (i + 1) % T;
    }

    for (i = 0; i < T; ++i) {
        cout << "Time " << (i + 1) << "\n";
        while (!teams[i].empty()) {
            cout << teams[i].top() << "\n";
            teams[i].pop();
        }
        cout << "\n";
    }

    return 0;
}
