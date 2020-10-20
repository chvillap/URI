// https://www.urionlinejudge.com.br/judge/en/problems/view/1566

#include <bits/stdc++.h>

using namespace std;

void counting_sort(int *array, int size, int max, int *output)
{
    int i, freq[max + 1];

    for (i = 0; i <= max; ++i)
        freq[i] = 0;

    for (i = 0; i < size; ++i)
        ++freq[array[i]];

    for (i = 1; i <= max; ++i)
        freq[i] += freq[i - 1];

    for (i = size - 1; i >= 0; --i) {
        output[freq[array[i]] - 1] = array[i];
        --freq[array[i]];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int NC, N, i;
    int *height = new int[3000000];
    int *sorted = new int[3000000];

    cin >> NC;

    while (NC) {
        cin >> N;
        for (i = 0; i < N; ++i)
            cin >> height[i];

        counting_sort(height, N, 230, sorted);

        cout << sorted[0];
        for (i = 1; i < N; ++i)
            cout << " " << sorted[i];
        cout << '\n';

        --NC;
    }

    delete[] sorted;
    delete[] height;

    return 0;
}
