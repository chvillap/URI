// https://www.urionlinejudge.com.br/judge/en/problems/view/1452

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <utility>

int main()
{
    while (true) {
        int numServers, numClients;
        int numApps;
        std::string appName;
        std::map<std::string, std::vector<int> > servers;
        std::set<std::pair<int, int> > connections;

        std::cin >> numServers >> numClients;
        if (!numServers && !numClients)
            break;

        for (int i = 0; i < numServers; ++i) {
            std::cin >> numApps;

            for (int j = 0; j < numApps; ++j) {
                std::cin >> appName;
                servers[appName].push_back(i);
            }
        }

        for (int i = 0; i < numClients; ++i) {
            std::cin >> numApps;

            for (int j = 0; j < numApps; ++j) {
                std::map<std::string, std::vector<int> >::iterator mit;

                std::cin >> appName;

                if ((mit = servers.find(appName)) != servers.end()) {
                    std::vector<int>::iterator vit;
                    for (vit = mit->second.begin(); vit != mit->second.end(); ++vit)
                        connections.insert(std::make_pair(i, *vit));
                }
            }
        }
        std::cout << connections.size() << "\n";
    }

    return 0;
}
