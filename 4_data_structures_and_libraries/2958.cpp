// https://www.urionlinejudge.com.br/judge/en/problems/view/2958

#include <bits/stdc++.h>

using namespace std;

bool compare(string const &x, string const &y)
{
    if (x[1] == y[1])
        return x[0] > y[0];
    return x[1] > y[1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, i, j, k;
    string C[10001];

    cin >> N >> M;

    for (i = 0, k = 0; i < N; ++i) {
        for (j = 0; j < M; ++j, ++k)
            cin >> C[k];
    }

    sort(C, C + k, compare);

    for (i = 0; i < k; ++i)
        cout << C[i] << "\n";

    return 0;
}
