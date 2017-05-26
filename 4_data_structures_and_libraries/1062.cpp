// https://www.urionlinejudge.com.br/judge/pt/problems/view/1062

#include <iostream>
#include <stack>
#include <queue>

int main()
{
    while (true) {
        int N, wagon;

        std::cin >> N;
        if (!N)
            break;

        while (true) {
            std::stack<int> origin, station;
            std::queue<int> expected;
            bool impossible = false;

            std::cin >> wagon;
            if (!wagon)
                break;

            expected.push(wagon);
            for (int i = 1; i < N; ++i) {
                std::cin >> wagon;
                expected.push(wagon);
            }

            for (int i = N; i > 0; --i)
                origin.push(i);

            while (!expected.empty() && !impossible) {
                if (!origin.empty() && origin.top() == expected.front()) {
                    origin.pop();
                    expected.pop();
                } else if (!station.empty() && station.top() == expected.front()) {
                    station.pop();
                    expected.pop();
                } else if (!origin.empty()) {
                    station.push(origin.top());
                    origin.pop();
                } else
                    impossible = true;
            }

            if (impossible)
                std::cout << "No\n";
            else
                std::cout << "Yes\n";
        }

        std::cout << "\n";
    }

    return 0;
}
