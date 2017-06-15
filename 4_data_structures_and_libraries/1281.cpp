// https://www.urionlinejudge.com.br/judge/pt/problems/view/1281

#include <iostream>
#include <iomanip>
#include <string>
#include <map>

int main()
{
    int N;

    std::cin >> N;

    for (int n = 0; n < N; ++n) {
        int M, P;
        double spent = 0.0;
        std::map<std::string, double> fruits;

        std::cin >> M;

        for (int m = 0; m < M; ++m) {
            std::string name;
            double price;

            std::cin >> name >> price;
            fruits[name] = price;
        }

        std::cin >> P;

        for (int p = 0; p < P; ++p) {
            std::string name;
            int quantity;

            std::cin >> name >> quantity;

            spent += fruits[name] * quantity;
        }

        std::cout << "R$ "
                  << std::fixed << std::setprecision(2)
                  << spent << "\n";
    }

    return 0;
}
