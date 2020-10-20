// https://www.urionlinejudge.com.br/judge/en/problems/view/1523

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct event
{
    int time, car;
    char action;

    event(int const &t, int const &c, char const &a) {
        time = t;
        car = c;
        action = a;
    }

    bool operator<(event const &rhs) const {
        bool result;
        if (time == rhs.time) {
            if (car == rhs.car)
                result = action < rhs.action;
            else
                result = action > rhs.action;
        } else
            result = time < rhs.time;
        return !result;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        int N, K, C, S;
        bool failure = false;
        stack<int> parkinglot;
        priority_queue<event> timeline;

        cin >> N >> K;
        if (!(N || K))
            break;


        for (int i = 1; i <= N; ++i) {
            cin >> C >> S;
            timeline.push(event(C, i, 'C'));
            timeline.push(event(S, i, 'S'));
        }

        while (!failure && !timeline.empty()) {
            event e(timeline.top());

            if (e.action == 'S') {
                if (e.car == parkinglot.top())
                    parkinglot.pop();
                else
                    failure = true;
            } else {
                if (parkinglot.size() < K)
                    parkinglot.push(e.car);
                else
                    failure = true;
            }
            timeline.pop();
        }

        if (failure)
            cout << "Nao\n";
        else
            cout << "Sim\n";
    }

    return 0;
}
