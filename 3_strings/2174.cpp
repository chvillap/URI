// https://www.urionlinejudge.com.br/judge/en/problems/view/2174

#include <iostream>
#include <string>
#include <set>

int main()
{
    int N;
    std::set<std::string> S;
    std::string pomekon;

    std::cin >> N;

    while (N) {
        std::cin >> pomekon;
        S.insert(pomekon);
        --N;
    }

    std::cout << "Falta(m) " << 151 - S.size() << " pomekon(s).\n";

    return 0;
}
