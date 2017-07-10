// https://www.urionlinejudge.com.br/judge/en/problems/view/1449

#include <iostream>
#include <cstring>
#include <string>
#include <map>

int main()
{
    int numInstances, numWords, numLines;
    char jp[81], pt[81], line[81];

    std::cin >> numInstances;

    for (int i = 0; i < numInstances; ++i) {
        std::map<std::string, std::string> dict;

        std::cin >> numWords >> numLines;
        std::cin.get();

        for (int j = 0; j < numWords; ++j) {
            std::cin.getline(jp, 81);
            std::cin.getline(pt, 81);

            dict[std::string(jp)] = std::string(pt);
        }

        for (int j = 0; j < numLines; ++j) {
            bool first = true;
            char *ptr = NULL;

            std::cin.getline(line, 81);

            ptr = strtok(line, " ");
            while (ptr) {
                if (!first)
                    std::cout << " ";
                first = false;

                std::string key(ptr);
                if (dict.find(key) != dict.end())
                    std::cout << dict[key];
                else
                    std::cout << key;

                ptr = strtok(NULL, " ");
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

    return 0;
}
