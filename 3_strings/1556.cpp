// https://www.urionlinejudge.com.br/judge/en/problems/view/1556

#include <iostream>
#include <string>
#include <set>

void generate(std::set<std::string> &set, std::string &str)
{
    if (!str.size())
        return;

    set.insert(str);

    for (size_t i = 0; i < str.size(); ++i) {
        std::string substr(str);
        substr.erase(i, 1);

        if (set.find(substr) == set.end())
            generate(set, substr);
    }
}

int main()
{
    std::string str;

    while (std::cin >> str) {
        std::set<std::string> set;
        std::set<std::string>::iterator it;

        generate(set, str);

        for (it = set.begin(); it != set.end(); ++it)
            std::cout << *it << "\n";
        std::cout << "\n";
    }

    return 0;
}
