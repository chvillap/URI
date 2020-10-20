// https://www.urionlinejudge.com.br/judge/en/problems/view/2729

#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    char line[21000], *word;
    set<string> sl;
    set<string>::iterator it;

    cin >> N;
    cin.get();

    while (N) {
        cin.getline(line, 21000);

        sl = set<string>();
        word = strtok(line, " ");
        while (word) {
            sl.insert(string(word));
            word = strtok(NULL, " ");
        }

        it = sl.begin();
        cout << *it++;
        while (it != sl.end())
            cout << " " << *it++;
        cout << "\n";

        --N;
    }

    return 0;
}
