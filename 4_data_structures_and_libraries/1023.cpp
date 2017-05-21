// https://www.urionlinejudge.com.br/judge/en/problems/view/1023

#include <iostream>
#include <cmath>
#include <map>

int main()
{
    int N, city = 0;

    std::cin >> N;

    while (true) {
        std::map<int, int> m;
        std::map<int, int>::iterator it;

        int residents, consumption;
        int totalResidents = 0, totalConsumption = 0;

        for (int i = 0; i < N; ++i) {
            std::cin >> residents >> consumption;
            m[consumption / residents] += residents;

            totalResidents += residents;
            totalConsumption += consumption;
        }

        std::cout << "Cidade# " << ++city << ":\n";

        it = m.begin();
        std::cout << it->second << "-" << it->first;
        ++it;

        while (it != m.end()) {
            std::cout << " " << it->second << "-" << it->first;
            ++it;
        }

        std::cout.precision(2);
        std::cout << "\nConsumo medio: " << std::fixed
                  << trunc(100.0 * totalConsumption / totalResidents) / 100.0
                  << " m3.\n";

        std::cin >> N;
        if (!N)
            break;
        else
            std::cout << '\n';
    }

    return 0;
}
