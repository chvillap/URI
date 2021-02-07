// https://www.urionlinejudge.com.br/judge/en/problems/view/2506

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, H, M, C, t, critical;
    queue<pair<int, int> > Q;

    while (cin >> N) {
        for (int i = 0; i < N; ++i) {
            cin >> H >> M >> C;
            Q.push(make_pair(H*60 + M, H*60 + M + C));
        }

        critical = 0;
        t = 420;

        while (!Q.empty()) {
            if (t >= Q.front().first) {
                if (t > Q.front().second)
                    ++critical;
                Q.pop();
            }
            t += 30;
        }

        cout << critical << "\n";
    }

    return 0;
}

/*
typedef pair<int, int> times;

struct comparator
{
    bool operator()(times const &lhs, times const &rhs) {
        if (lhs.first == rhs.first)
            return lhs.second > rhs.second;
        return lhs.first > rhs.first;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, H, M, C, t, critical;
    priority_queue<times, vector<times>, comparator > pq;

    while (cin >> N) {
        for (int i = 0; i < N; ++i) {
            cin >> H >> M >> C;
            pq.push(make_pair(H*60 + M, H*60 + M + C));
        }

        critical = 0;
        t = 420;

        while (!pq.empty()) {
            if (t >= pq.top().first) {
                if (t > pq.top().second)
                    ++critical;
                pq.pop();
            }
            t += 30;
        }

        cout << critical << "\n";
    }

    return 0;
}
*/
