// https://www.urionlinejudge.com.br/judge/en/problems/view/1911

#include <bits/stdc++.h>

using namespace std;

bool false_signature(string const &original, string const &checked)
{
    size_t i, diffs = 0;

    for (i = 0; diffs <= 1 && i < original.size(); ++i) {
        if (original[i] != checked[i])
            ++diffs;
    }

    return diffs > 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        int N, M, i, count;
        string name, sign;
        map<string, string> signatures;
        map<string, string>::iterator it;

        cin >> N;
        if (!N)
            break;

        for (i = 0; i < N; ++i) {
            cin >> name >> sign;
            signatures[name] = sign;
        }

        cin >> M;

        for (count = 0, i = 0; i < M; ++i) {
            cin >> name >> sign;

            it = signatures.find(name);
            if (false_signature(it->second, sign))
                ++count;
        }

        cout << count << "\n";
    }

    return 0;
}
