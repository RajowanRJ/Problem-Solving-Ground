// Starting in the name of Almighty Allah
// https://codeforces.com/problemset/problem/791/A
#include <stdio.h>

int main ()
{
    int i, j, flag = 0;
    scanf("%d %d", &i, &j);

    while (1)
    {
        if (i > j)
        break;
        i *= 3;
        j *= 2;
        flag++;
    }
    printf("%d", flag);
}