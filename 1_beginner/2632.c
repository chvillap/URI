// https://www.urionlinejudge.com.br/judge/en/problems/view/2632

#include <stdio.h>
#include <math.h>

#define sqr(x) ((x) * (x))

int rect_circle_intersection(double rw, double rh, double rx, double ry,
                             double cx, double cy, double cr)
{
    double center_dist_x = fabs(cx - rx);
    double center_dist_y = fabs(cy - ry);
    double corner_dist_2 = sqr(center_dist_x - rw / 2) +
                           sqr(center_dist_y - rh / 2);

    if ((center_dist_x > (cr + rw / 2)) ||
        (center_dist_y > (cr + rh / 2)))
        return 0;

    if ((center_dist_x <= rw / 2) ||
        (center_dist_y <= rh / 2))
        return 1;

    return corner_dist_2 <= sqr(cr);
}

int main()
{
    int T, N;
    double w, h, x0, y0;
    double cx, cy;
    char spell[6];

    scanf("%d", &T);

    while (T) {
        int radius, damage;

        scanf("%lf%lf%lf%lf\n%s%d%lf%lf", &w, &h, &x0, &y0, spell, &N, &cx, &cy);

        if (spell[0] == 'f') {
            damage = 200;
            switch (N) {
                case 1: radius = 20; break;
                case 2: radius = 30; break;
                case 3: radius = 50; break;
            }
        } else if (spell[0] == 'w') {
            damage = 300;
            switch (N) {
                case 1: radius = 10; break;
                case 2: radius = 25; break;
                case 3: radius = 40; break;
            }
        } else if (spell[0] == 'e') {
            damage = 400;
            switch (N) {
                case 1: radius = 25; break;
                case 2: radius = 55; break;
                case 3: radius = 70; break;
            }
        } else if (spell[0] == 'a') {
            damage = 100;
            switch (N) {
                case 1: radius = 18; break;
                case 2: radius = 38; break;
                case 3: radius = 60; break;
            }
        }

        if (!rect_circle_intersection(w, h, x0 + w / 2, y0 + h / 2, cx, cy, radius))
            damage = 0;

        printf("%d\n", damage);

        --T;
    }

    return 0;
}