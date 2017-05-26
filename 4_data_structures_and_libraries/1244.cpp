// https://www.urionlinejudge.com.br/judge/en/problems/view/1244

#include <iostream>
#include <string>
#include <algorithm>

bool compare(std::string s1, std::string s2)
{
    return s1.size() > s2.size();
}

int main()
{
    int N;

    std::cin >> N;
    std::cin.get();

    for (int i = 0; i < N; ++i) {
        char line[2550], *beg, *end;
        std::string set[50];
        int setSize = 0;

        std::cin.getline(line, 2550);

        beg = end = line;
        while (*end != '\0') {
            if (*end == ' ') {
                set[setSize++] = std::string(beg, end);
                beg = end + 1;
            }
            ++end;
        }
        set[setSize++] = std::string(beg, end);

        std::stable_sort(set, set + setSize, compare);

        std::cout << set[0];
        for (int j = 1; j < setSize; ++j)
            std::cout << " " << set[j];
        std::cout << "\n";
    }

    return 0;
}
