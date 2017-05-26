// https://www.urionlinejudge.com.br/judge/en/problems/view/1215

#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
#include <set>

int main()
{
    char line[201];

    std::set<std::string> words;
    std::set<std::string>::iterator it;

    while (std::cin.getline(line, 201)) {
        char *beg = line;
        char *end = line;

        while (*end != '\0') {
            if (isalpha(*end))
                ++end;
            else {
                if (beg != end) {
                    std::string str(beg, end);
                    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
                    words.insert(str);
                }
                ++end;
                beg = end;
            }
        }
        if (beg != end) {
            std::string str(beg, end);
            std::transform(str.begin(), str.end(), str.begin(), ::tolower);
            words.insert(str);
        }
    }

    for (it = words.begin(); it != words.end(); ++it)
        std::cout << *it << std::endl;

    return 0;
}
