// https://www.urionlinejudge.com.br/judge/en/problems/view/1873

#include <iostream>
#include <string>
#include <map>

int main()
{
    typedef std::multimap<std::string, std::string> MultimapType;
    typedef MultimapType::iterator IteratorType;
    typedef std::pair<IteratorType, IteratorType> RangeType;

    int C;
    MultimapType wins;

    wins.insert(std::make_pair("tesoura", "papel"));
    wins.insert(std::make_pair("tesoura", "lagarto"));
    wins.insert(std::make_pair("papel", "pedra"));
    wins.insert(std::make_pair("papel", "spock"));
    wins.insert(std::make_pair("pedra", "lagarto"));
    wins.insert(std::make_pair("pedra", "tesoura"));
    wins.insert(std::make_pair("lagarto", "spock"));
    wins.insert(std::make_pair("lagarto", "papel"));
    wins.insert(std::make_pair("spock", "tesoura"));
    wins.insert(std::make_pair("spock", "pedra"));

    std::cin >> C;

    while (C) {
        std::string rajesh, sheldon;
        std::string winner("empate");
        IteratorType it;
        RangeType r;

        std::cin >> rajesh >> sheldon;

        r = wins.equal_range(rajesh);
        for (it = r.first; it != r.second; ++it) {
            if (it->second == sheldon) {
                winner = std::string("rajesh");
                break;
            }
        }

        if (winner[0] == 'e') {
            r = wins.equal_range(sheldon);
            for (it = r.first; it != r.second; ++it) {
                if (it->second == rajesh) {
                    winner = std::string("sheldon");
                    break;
                }
            }
        }

        std::cout << winner << "\n";

        --C;
    }

    return 0;
}
