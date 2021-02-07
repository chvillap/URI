// https://www.urionlinejudge.com.br/judge/en/problems/view/2492

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, i, exit;
    string name1, sep, name2;
    map<string, list<string> >::iterator it;

    while (true) {
        map<string, list<string> > conn1;
        map<string, list<string> > conn2;

        cin >> T;
        if (!T)
            break;

        for (i = 0; i < T; ++i) {
            cin >> name1 >> sep >> name2;
            conn1[name1].push_back(name2);
            conn2[name2].push_back(name1);
        }

        exit = 0;
        for (it = conn1.begin(); !exit && it != conn1.end(); ++it) {
            if (it->second.size() > 1)
                exit = 1;
            else if (conn2[it->second.front()].size() > 1)
                exit = 2;
        }

        switch (exit) {
            case 1:
                cout << "Not a function.\n";
                break;
            case 2:
                cout << "Not invertible.\n";
                break;
            default:
                cout << "Invertible.\n";
        }
    }

    return 0;
}
