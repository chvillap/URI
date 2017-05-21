// https://www.urionlinejudge.com.br/judge/en/problems/view/1110

#include <iostream>
#include <queue>

int main()
{
    while (true) {
        int n;
        std::queue<int> cards;

        std::cin >> n;
        if (!n)
            break;

        for (int i = 1; i <= n; ++i)
            cards.push(i);

        std::cout << "Discarded cards: " << cards.front();
        cards.pop();
        cards.push(cards.front());
        cards.pop();

        while (cards.size() > 1) {
            std::cout << ", " << cards.front();
            cards.pop();
            cards.push(cards.front());
            cards.pop();
        }

        std::cout << "\nRemaining card: " << cards.front() << "\n";
    }

    return 0;
}
