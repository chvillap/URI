// https://www.urionlinejudge.com.br/judge/en/problems/view/1861

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string name1, name2;
    map<string, int> murders;
    map<string, int>::iterator it1;
    unordered_set<string> killed;
    unordered_set<string>::iterator it2;

    while (cin >> name1 >> name2) {
        murders[name1] += 1;
        killed.insert(name2);
    }

    for (it2 = killed.begin(); it2 != killed.end(); ++it2)
        murders.erase(*it2);

    cout << "HALL OF MURDERERS\n";
    for (it1 = murders.begin(); it1 != murders.end(); ++it1)
        cout << it1->first << " " << it1->second << "\n";

    return 0;
}
