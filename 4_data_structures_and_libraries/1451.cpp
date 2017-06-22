// https://www.urionlinejudge.com.br/judge/en/problems/view/1451

#include <iostream>
#include <string>
#include <list>

int main()
{
    char buffer[100001];

    while (std::cin.getline(buffer, 100001)) {
        std::string line(buffer);
        std::list<std::string> lst;
        std::list<std::string>::iterator it;
        int pos = 0, end = 0;
        bool push_front = false;

        while (pos < line.size()) {
            int i = line.find_first_of('[', pos);
            int j = line.find_first_of(']', pos);

            if (i >= 0 && j >= 0)
                end = std::min(i, j);
            else if (i >= 0)
                end = i;
            else if (j >= 0)
                end = j;
            else
                end = line.size();

            if (push_front)
                lst.push_front(line.substr(pos, end - pos));
            else
                lst.push_back(line.substr(pos, end - pos));

            push_front = (line[end] == '[');
            pos = end + 1;
        }

        for (it = lst.begin(); it != lst.end(); ++it)
            std::cout << *it;
        std::cout << "\n";
    }

    return 0;
}
