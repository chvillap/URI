// https://www.urionlinejudge.com.br/judge/en/problems/view/1276

#include <iostream>
#include <string>
#include <set>

int main()
{
    std::string line;

    while (true) {
        std::getline(std::cin, line);
        if (std::cin.eof())
            break;

        if (line.size()) {
            std::set<char> letters(line.begin(), line.end());
            std::set<char>::iterator it;

            letters.erase(' ');
            it = letters.begin();

            char prev = *it++;
            std::cout << prev << ":";

            while (it != letters.end()) {
                if (*it != prev + 1)
                    std::cout << prev << ", " << *it << ":";

                prev = *it++;
            }
            std::cout << prev;
        }
        std::cout << "\n";
    }

    return 0;
}
