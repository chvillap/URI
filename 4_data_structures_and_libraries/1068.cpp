// https://www.urionlinejudge.com.br/judge/en/problems/view/1068

#include <iostream>
#include <stack>

int main()
{
    char line[1001];

    while (std::cin >> line) {
        std::stack<bool> s;

        for (char *ptr = line; *ptr != '\0'; ++ptr) {
            if (*ptr == '(')
                s.push(true);
            else if (*ptr == ')') {
                if (s.empty()) {
                    s.push(false);
                    break;
                } else
                    s.pop();
            }
        }
        if (s.empty())
            std::cout << "correct\n";
        else
            std::cout << "incorrect\n";
    }

    return 0;
}
