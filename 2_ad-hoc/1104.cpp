// https://www.urionlinejudge.com.br/judge/en/problems/view/1104

#include <iostream>
#include <algorithm>

int main()
{
    while (1) {
        int A, B, i, j;
        int X[100000], Y[100000];
        int dXY[100000], dYX[100000];
        int *dXYend, *dYXend;

        std::cin >> A >> B;
        if (!A && !B)
            break;

        for (i = 0, j = 0; i < A; ++i) {
            std::cin >> X[j];
            if (!j || X[j] != X[j-1])
                ++j;
        }
        A = j;

        for (i = 0, j = 0; i < B; ++i) {
            std::cin >> Y[j];
            if (!j || Y[j] != Y[j-1])
                ++j;
        }
        B = j;

        dXYend = std::set_difference(X, X + A, Y, Y + B, dXY);
        dYXend = std::set_difference(Y, Y + B, X, X + A, dYX);

        std::cout << std::min(dXYend - dXY, dYXend - dYX) << "\n";
    }

    return 0;
}
