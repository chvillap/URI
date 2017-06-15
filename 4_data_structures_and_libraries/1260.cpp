// https://www.urionlinejudge.com.br/judge/pt/problems/view/1260

#include <iostream>
#include <iomanip>
#include <string>
#include <map>

int main()
{
    int N;
    bool first = true;

    std::cin >> N;
    std::cin.ignore();
    std::cin.ignore();

    for (int n = 0; n < N; ++n) {
        char line[31];
        int count = 0;
        std::map<std::string, int> percents;
        std::map<std::string, int>::iterator it;

        while (true) {
            std::cin.getline(line, 31);
            std::string name(line);

            if (!name.size())
                break;

            percents[name] += 1;
            ++count;
        }

        if (!first)
            std::cout << '\n';
        first = false;

        for (it = percents.begin(); it != percents.end(); ++it) {
            std::cout << it->first << " "
                      << std::fixed << std::setprecision(4)
                      << 100.0 * it->second / count << "\n";
        }
    }

    return 0;
}
