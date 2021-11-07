// https://www.beecrowd.com.br/judge/pt/problems/view/3118

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

typedef unordered_map<string, string> map_t;
typedef vector<string> list_t;

list_t find_groups(string &s) {
    list_t groups;
    if (!s.empty()) {
        string tmp_str;
        char c = s[0];
        for (string::iterator it = s.begin(); it != s.end(); ++it) {
            if (*it == c)
                tmp_str += c;
            else {
                groups.push_back(tmp_str);
                c = *it;
                tmp_str.clear();
                tmp_str += c;
            }
        }
        groups.push_back(tmp_str);
    }
    return groups;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, count_A, count_B;
    map_t rules;
    string bacteria("A");

    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        string key, val;
        cin >> key >> val;
        rules[key] = val;
    }

    for (int i = 0; i < N; ++i) {
        string tmp_str;
        list_t groups = find_groups(bacteria);
        for (list_t::iterator it = groups.begin(); it != groups.end(); ++it) {
            if (rules.find(*it) != rules.end())
                tmp_str += rules[*it];
            else
                tmp_str += *it;
        }
        bacteria = tmp_str;
    }

    count_A = count(bacteria.begin(), bacteria.end(), 'A');
    count_B = count(bacteria.begin(), bacteria.end(), 'B');
    cout << count_A << " " << count_B << "\n";

    return 0;
}
