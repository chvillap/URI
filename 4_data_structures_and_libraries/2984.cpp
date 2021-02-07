// https://www.urionlinejudge.com.br/judge/en/problems/view/2984

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<char> nb;
    string S;

    cin >> S;

    for (string::iterator it = S.begin(); it != S.end(); ++it) {
        if (*it == '(')
            nb.push('(');
        else {
            if (nb.size())
                nb.pop();
        }
    }

    if (!nb.size())
        cout << "Partiu RU!\n";
    else
        cout << "Ainda temos " << nb.size() << " assunto(s) pendente(s)!\n";

    return 0;
}
