// https://www.urionlinejudge.com.br/judge/en/problems/view/1897

#include <bits/stdc++.h>

using namespace std;

int operation(int i, int x)
{
    switch (i) {
        case 0: return x * 2;
        case 1: return x * 3;
        case 2: return x / 2;
        case 3: return x / 3;
        case 4: return x + 7;
        case 5: return x - 7;
        default: return x;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, x, y, h;
    queue<pair<int, int> > Q;
    set<int> visited;

    cin >> N >> M;

    // BFS
    Q.push(make_pair(N, 0));
    while (Q.front().first != M) {
        x = Q.front().first;
        h = Q.front().second;
        Q.pop();

        for (int i = 0; i < 6; ++i) {
            y = operation(i, x);
            if (visited.find(y) == visited.end()) {
                Q.push(make_pair(y, h + 1));
                visited.insert(y);
            }
        }
    }

    cout << Q.front().second << "\n";

    return 0;
}
