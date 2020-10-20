// https://www.urionlinejudge.com.br/judge/en/problems/view/2136

#include <iostream>
#include <string>
#include <set>

using namespace std;

bool compare1(pair<string, string> const &p1, pair<string, string> const &p2)
{
    if (p1.second != p2.second)
        return p1.second > p2.second;

    return p1.first < p2.first;
}

bool compare2(string const &s1, string const &s2)
{
    return s1.size() > s2.size();
}

int main()
{
    string name, option;
    set<pair<string, string>, bool (*)(pair<string, string> const &, pair<string, string> const &)> names1(compare1);
    set<pair<string, string>, bool (*)(pair<string, string> const &, pair<string, string> const &)>::iterator it;
    set<string, bool (*)(string const &, string const &)> names2(compare2);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        cin >> name >> option;
        if (name == "FIM")
            break;

        names1.insert(make_pair(name, option));

        if (option[0] == 'Y')
            names2.insert(name);
    }

    for (it = names1.begin(); it != names1.end(); ++it)
        cout << it->first << "\n";

    cout << "\nAmigo do Habay:\n" << *names2.begin() << "\n";

    return 0;
}
