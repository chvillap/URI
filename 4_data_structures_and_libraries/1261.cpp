// https://www.urionlinejudge.com.br/judge/pt/problems/view/1261

#include <iostream>
#include <cstring>
#include <string>
#include <map>

int main()
{
    int M, N;
    char line[1000001];
    std::map<std::string, int> hayPts;
    int dollars, salary = 0;

    std::cin >> M >> N;

    for (int m = 0; m < M; ++m) {
        std::cin >> line >> dollars;
        hayPts[std::string(line)] = dollars;
    }

    while (std::cin.getline(line, 1000001)) {
        if (!strcmp(line, ".")) {
            std::cout << salary << "\n";
            salary = 0;
        } else {
            char *ptr = strtok(line, " ");
            while (ptr) {
                salary += hayPts[std::string(ptr)];
                ptr = strtok(NULL, " ");
            }
        }
    }

    return 0;
}
