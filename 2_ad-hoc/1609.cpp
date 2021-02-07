// https://www.urionlinejudge.com.br/judge/en/problems/view/1609

#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;

    cin >> T;

    while (T) {
        int N, id, j;
        set<int> sheep;

        cin >> N;

        for (j = 0; j < N; ++j) {
            cin >> id;
            sheep.insert(id);
        }

        cout << sheep.size() << "\n";
        --T;
    }

    return 0;
}
