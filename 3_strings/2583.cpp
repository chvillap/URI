// https://www.beecrowd.com.br/judge/en/problems/view/2583

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int C;
    cin >> C;

    while (C) {
        int N;
        string thing, word;
        set<string> total;
        set<string>::iterator it;

        cin >> N;
        while (N) {
            cin >> thing >> word;
            if (word == "chirrin")
                total.insert(thing);
            else if (word == "chirrion")
                total.erase(thing);
            --N;
        }

        cout << "TOTAL\n";
        for (it = total.begin(); it != total.end(); ++it)
            cout << *it << "\n";
        
        --C;
    }

    return 0;
}
