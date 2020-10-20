// https://www.urionlinejudge.com.br/judge/en/problems/view/2482

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, i;
    string name, lang, trans;
    map<string, string> message;

    cin >> N;
    cin.get();

    for (i = 0; i < N; ++i) {
        getline(cin, lang);
        getline(cin, trans);

        message[lang] = trans;
    }

    cin >> M;
    cin.get();

    for (i = 0; i < M; ++i) {
        getline(cin, name);
        getline(cin, lang);

        cout << name << "\n" << message[lang] << "\n\n";
    }

    return 0;
}
