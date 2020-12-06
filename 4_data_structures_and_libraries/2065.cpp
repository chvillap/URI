// https://www.urionlinejudge.com.br/judge/en/problems/view/2065

#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, v[10000], c[10000];
    int i, j, t, client, cashier, free, busy[10000];

    cin >> N >> M;
    for (i = 0; i < N; ++i)
        cin >> v[i];
    for (j = 0; j < M; ++j)
        cin >> c[j];

    memset(busy, 0, sizeof(busy));

    t = -1;
    client = 0;
    do {
        ++t;
        for (cashier = 0, free = 0; cashier < N; ++cashier) {
            if (busy[cashier])
                --busy[cashier];

            if (!busy[cashier]) {
                if (client < M) {
                    busy[cashier] = v[cashier] * c[client];
                    ++client;
                } else
                    ++free;
            }
        }
    } while (free < N);

    cout << t << endl;

    return 0;
}
