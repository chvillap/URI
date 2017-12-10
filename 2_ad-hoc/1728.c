// https://www.urionlinejudge.com.br/judge/en/problems/view/1728

#include <stdio.h>
#include <string.h>

char* strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main()
{
    while (1) {
        char line[25], *ptr;
        int nums[3], i;

        fgets(line, 25, stdin);

        if (!strcmp(line, "0+0=0\n")) {
            puts("True");
            break;
        }

        i = 0;
        ptr = strtok(line, "+=");
        while (ptr) {
            ptr = strrev(ptr);
            sscanf(ptr, "%d", &nums[i++]);
            ptr = strtok(NULL, "+=");
        }

        if (nums[0] + nums[1] == nums[2])
            puts("True");
        else
            puts("False");
    }

    return 0;
}
