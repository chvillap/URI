// https://www.urionlinejudge.com.br/judge/en/problems/view/2018

#include <bits/stdc++.h>

using namespace std;

struct country
{
    country(string name = "") {
        this->name = name;
        medals[0] = medals[1] = medals[2] = 0;
    }

    bool operator<(country const &rhs) {
        if (medals[0] == rhs.medals[0]) {
            if (medals[1] == rhs.medals[1]) {
                if (medals[2] == rhs.medals[2])
                    return name > rhs.name;
                return medals[2] < rhs.medals[2];
            }
            return medals[1] < rhs.medals[1];
        }
        return medals[0] < rhs.medals[0];
    }

    string name;
    int medals[3];
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    vector<country> scoreboard;
    unordered_map<string, country> um;
    unordered_map<string, country>::iterator um_it;

    while (getline(cin, line)) {
        for (int i = 0; i < 3; ++i) {
            getline(cin, line);
            if (um.find(line) == um.end()) {
                country c(line);
                c.medals[i] = 1;
                um[line] = c;
            } else
                um[line].medals[i] += 1;
        }
    }

    for (um_it = um.begin(); um_it != um.end(); ++um_it)
        scoreboard.push_back(um_it->second);

    sort(scoreboard.begin(), scoreboard.end());

    cout << "Quadro de Medalhas\n";
    for (int i = scoreboard.size() - 1; i >= 0; --i) {
        cout << scoreboard[i].name << " "
             << scoreboard[i].medals[0] << " "
             << scoreboard[i].medals[1] << " "
             << scoreboard[i].medals[2] << "\n";
    }

    return 0;
}
