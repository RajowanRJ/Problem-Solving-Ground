// Starting in the name of Almighty Allah
// https://codeforces.com/contest/112/problem/A
#include <stdio.h>
#include <string.h>

int main ()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int i = 0;
    while (1)
    {
        int j = 0;
        while (a[j] != '\0' && b[j] != '\0')
        {
            if (a[j] >= 'A' && a[j] <= 'Z')
            {
                a[j] += 32;
            }
            if (b[j] >= 'A' && b[j] <= 'Z')
            {
                b[j] += 32;
            }
            j++;
        }
        // printf("%s %s", a, b);
        // break;
        if (a[i] == b[i])
        {
            i++;
            if(a[i] == '\0' && b[i] == '\0')
            {
                printf("0\n");
                break;
            }
        }
        else if (a[i] < b[i])
        {
            printf("-1\n");
            break;
        }
        else 
        {
            printf("1\n");
            break;
        }
    }
    
}