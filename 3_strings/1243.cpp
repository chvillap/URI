// https://www.urionlinejudge.com.br/judge/en/problems/view/1243

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

int main()
{
    std::string line;

    while (std::getline(std::cin, line)) {
        int size = line.size();
        int sumsizes = 0, numwords = 0, avgsize = 0;
        std::string token;
        std::istringstream iss(line);

        while (std::getline(iss, token, ' ')) {
            bool invalid = false;
            int tokensize1 = token.size();
            int tokensize2 = 0;

            for(int i = 0; i < tokensize1; ++i) {
                if(isdigit(token[i]) || token[i] == '.' && i != tokensize1-1) {
                    invalid = true;
                    break;
                } else if(token[i] != '.')
                    ++tokensize2;
            }
            if(!invalid) {
                sumsizes += tokensize2;
                ++numwords;
            }
        }

        if (numwords > 0)
            avgsize = sumsizes / numwords;

        if (avgsize <= 3)
            std::cout << "250\n";
        else if (avgsize <= 5)
            std::cout << "500\n";
        else
            std::cout << "1000\n";
    }
}
