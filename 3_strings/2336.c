// https://www.beecrowd.com.br/judge/en/problems/view/2336

#include <stdio.h>
#include <string.h>

unsigned long long mod_pow(int base, int expt)
{
    unsigned long long half;
    if (!base)
        return 0llu;
    if (!expt)
        return 1llu;    
    half = mod_pow(base, expt / 2);
    if (expt % 2)
        return (((base * half) % 1000000007) * half) % 1000000007;
    return (half * half) % 1000000007;
}

int main()
{
    char S[1001];
    int i, length;
    unsigned long long decimal;

    while (scanf("%s", S) != EOF) {
        length = strlen(S);
        decimal = 0llu;

        for (i = 0; i < length; ++i)
            decimal = (decimal + (S[i] - 'A') * mod_pow(26, length-1-i)) % 1000000007;
        
        printf("%llu\n", decimal);
    }

    return 0;
}
