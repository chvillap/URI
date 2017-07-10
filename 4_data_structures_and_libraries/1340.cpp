// https://www.urionlinejudge.com.br/judge/en/problems/view/1340

#include <iostream>
#include <stack>
#include <queue>

int main()
{
    int n, cmd, x;

    while (std::cin >> n) {
        std::stack<int> stack;
        std::queue<int> queue;
        std::priority_queue<int> prqueue;
        bool canBeStack = true, canBeQueue = true, canBePrQueue = true;

        for (int i = 0; i < n; ++i) {
            std::cin >> cmd >> x;

            if (cmd == 1) {
                stack.push(x);
                queue.push(x);
                prqueue.push(x);
            } else /*if (cmd == 2)*/ {
                if (canBeStack) {
                    if (x == stack.top())
                        stack.pop();
                    else
                        canBeStack = false;
                }
                if (canBeQueue) {
                    if (x == queue.front())
                        queue.pop();
                    else
                        canBeQueue = false;
                }
                if (canBePrQueue) {
                    if (x == prqueue.top())
                        prqueue.pop();
                    else
                        canBePrQueue = false;
                }
            }
        }

        if (!canBeStack && !canBeQueue && !canBePrQueue)
            std::cout << "impossible\n";
        else if (canBeStack && !canBeQueue && !canBePrQueue)
            std::cout << "stack\n";
        else if (!canBeStack && canBeQueue && !canBePrQueue)
            std::cout << "queue\n";
        else if (!canBeStack && !canBeQueue && canBePrQueue)
            std::cout << "priority queue\n";
        else
            std::cout << "not sure\n";
    }

    return 0;
}
