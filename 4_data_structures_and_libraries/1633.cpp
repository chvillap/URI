// https://www.urionlinejudge.com.br/judge/en/problems/view/1633

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> process_t;

struct comp1
{
    bool operator()(process_t &lhs, process_t &rhs) const {
        if (lhs.first == rhs.first)
            return lhs.second > rhs.second;
        return lhs.first > rhs.first;
    };
};

struct comp2
{
    bool operator()(process_t &lhs, process_t &rhs) const {
        if (lhs.second == rhs.second)
            return lhs.first > rhs.first;
        return lhs.second > rhs.second;
    };
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long N, t, c;
    long long n, i, endtime;
    long long totaltime;
    priority_queue<process_t, vector<process_t>, comp1 > idle;
    priority_queue<process_t, vector<process_t>, comp2 > waiting;
    bool running;

    while (cin >> N) {
        for (n = 0; n < N; ++n) {
            cin >> t >> c;
            idle.push(make_pair(t, c));
        }

        totaltime = 0;
        running = false;
        endtime = 0;
        i = 1;

        while (!(idle.empty() && waiting.empty())) {
            while (!idle.empty() && i == idle.top().first) {
                waiting.push(idle.top());
                idle.pop();
            }

            if (i == endtime) {
                running = false;
                endtime = 0;
            }

            if (!running && !waiting.empty()) {
                running = true;
                endtime = i + waiting.top().second;
                totaltime += i - waiting.top().first;
                waiting.pop();
            }

            ++i;
        }

        cout << totaltime << "\n";
    }

    return 0;
}
