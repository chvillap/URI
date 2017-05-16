// https://www.urionlinejudge.com.br/judge/en/problems/view/1237

#include <stdio.h>
#include <string.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int LCSubstr(char *s1, char *s2, int n1, int n2)
{
    // Create a table to store lengths of longest common suffixes of
    // substrings.   Notethat LCSuff[i][j] contains length of longest
    // common suffix of X[0..i-1] and Y[0..j-1]. The first row and
    // first column entries have no logical meaning, they are used only
    // for simplicity of program
    int LCSuff[51][51];
    int result = 0;
    int i, j;

    // Build LCSuff[m+1][n+1] in bottom up fashion.
    for (i = 0; i <= n1; ++i) {
        for (j = 0; j <= n2; ++j) {
            if (!i || !j)
                LCSuff[i][j] = 0;
            else if (s1[i-1] == s2[j-1]) {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            } else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main()
{
    char str1[52], str2[52];
    int len1, len2;

    while (fgets(str1, 52, stdin)) {
        fgets(str2, 52, stdin);

        len1 = strlen(str1) - 1;
        len2 = strlen(str2) - 1;

        printf("%d\n", LCSubstr(str1, str2, len1, len2));
    }

    return 0;
}
