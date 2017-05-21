// https://www.urionlinejudge.com.br/judge/en/problems/view/1069

#include <iostream>
#include <stack>

int main()
{
    int N;

    std::cin >> N;

    for (; N > 0; --N) {
        std::stack<char> s;
        char line[1001];
        int count = 0;

        std::cin >> line;

        for (char *ptr = line; *ptr != '\0'; ++ptr) {
            if (*ptr == '<')
                s.push('<');
            else if (*ptr == '>') {
                if (!s.empty()) {
                    s.pop();
                    ++count;
                }
            }
        }
        std::cout << count << "\n";
    }

    return 0;
}
