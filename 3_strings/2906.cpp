// https://www.urionlinejudge.com.br/judge/en/problems/view/2906

#include <iostream>
#include <algorithm>
#include <string>
#include <set>

int main()
{
    int N, at, plus;
    std::string email;
    std::set<std::string> users;

    std::cin >> N;

    while (N) {
        std::string clean1, clean2;

        std::cin >> email;

        at = email.find_first_of('@');
        std::remove_copy(email.begin(), email.begin() + at,
            std::back_inserter(clean1), '.');
        plus = clean1.find_first_of('+');
        clean2 = clean1.substr(0, plus) + email.substr(at);

        users.insert(clean2);
        --N;
    }

    std::cout << users.size() << "\n";

    return 0;
}
