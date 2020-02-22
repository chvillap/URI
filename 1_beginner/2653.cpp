// https://www.urionlinejudge.com.br/judge/en/problems/view/2653

#include <iostream>
#include <set>

int main()
{
    std::set<std::string> jewelry;
    char input[1000001];

    while (std::cin >> input)
        jewelry.insert(std::string(input));
    
    std::cout << jewelry.size() << '\n';

    return 0;
}