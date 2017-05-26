// https://www.urionlinejudge.com.br/judge/en/problems/view/1258

#include <iostream>
#include <algorithm>
#include <string>

struct Shirt {
    std::string name;
    std::string color;
    char size;
};

bool compare(Shirt s1, Shirt s2)
{
    int cmpColor = s1.color.compare(s2.color);

    if (!cmpColor) {
        if (s1.size == s2.size)
            return s1.name.compare(s2.name) < 0;

        return s1.size > s2.size;
    }
    return cmpColor < 0;
}

int main()
{
    bool first = true;

    while (true) {
        int N;
        Shirt shirts[60];

        std::cin >> N;
        if (!N)
            break;

        for (int i = 0; i < N; ++i) {
            char name[1000];
            char color[10];
            char size;

            std::getchar();
            std::cin.getline(name, 1000);
            std::cin >> color >> size;

            shirts[i].name = std::string(name);
            shirts[i].color = std::string(color);
            shirts[i].size = size;
        }

        std::sort(shirts, shirts + N, compare);

        if (!first)
            std::cout << "\n";

        for (int i = 0; i < N; ++i) {
            std::cout << shirts[i].color << " "
                      << shirts[i].size << " "
                      << shirts[i].name << "\n";
        }

        first = false;
    }

    return 0;
}
