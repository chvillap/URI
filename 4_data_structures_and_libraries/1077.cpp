// https://www.urionlinejudge.com.br/judge/en/problems/view/1077

#include <iostream>
#include <cctype>
#include <stack>

int precedence(char op)
{
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return 0;
}


void convert(char *&pi, char *&pp)
{
    std::stack<char> s;

    while (*pi != '\0') {
        if (*pi == '(') {
            s.push(*pi);
        } else if (*pi == ')') {
            while (!s.empty() && s.top() != '(') {
                *pp++ = s.top();
                s.pop();
            }
            s.pop();
        } else if (isalpha(*pi) || isdigit(*pi)) {
            *pp++ = *pi;
        } else { // operator
            while (!s.empty() && precedence(s.top()) >= precedence(*pi)) {
                *pp++ = s.top();
                s.pop();
            }
            s.push(*pi);
        }
        ++pi;
    }

    while (!s.empty()) {
        *pp++ = s.top();
        s.pop();
    }
    *pp++ = '\0';
}

int main()
{
    int N;

    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        char infix[10000];
        char posfix[10000];
        char *pi = infix;
        char *pp = posfix;

        std::cin >> infix;
        convert(pi, pp);
        std::cout << posfix << "\n";
    }

    return 0;
}
