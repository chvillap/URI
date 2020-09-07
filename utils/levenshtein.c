#include <string.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))


int levenshtein(char *x, int const m, char *y, int const n)
{
    // The straightforward implementation considers an A[m1][n+1] matrix
    // in which each column represents a char from x, each row represents
    // a char from y, and the value at A[i][j] is the edit distance from
    // the i-long substring of x to the j-long substring of y
    // Here we used a sub-optimized implementation with two vectors, v0 and
    // v1, rather than the full matrix A

    int v0[n + 1]; // previous row of distances
    int v1[n + 1]; // current row of distances (from v0)
    int i, j, del_cost, ins_cost, sub_cost;

    // At first this row is A[0][i]: edit distances for an empty string x
    // It is just the number of characters to delete from string y
    for (i = 0; i <= n; ++i)
        v0[i] = i;

    for (i = 0; i < m; ++i) {
        // v1[0] is the element A[i+1][0]
        // This edit distance means to delete (i+1) chars from x to match empty y
        v1[0] = i + 1;

        // Use the formula to fill the rest of the row
        for (j = 0; j < n; ++j) {
            del_cost = v0[j + 1] + 1;
            ins_cost = v1[j] + 1;
            if (x[i] == y[j])
                sub_cost = v0[j];
            else
                sub_cost = v0[j] + 1;

            v1[j + 1] = min(del_cost, min(ins_cost, sub_cost));
        }

        // Copy v1 to v0 for the next iteration
        memcpy(v0, v1, sizeof(v1));
    }
    return v0[n];
}
