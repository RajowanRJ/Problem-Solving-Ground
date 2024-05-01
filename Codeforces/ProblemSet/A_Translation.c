// Starting in the name of Almighty Allah
// https://codeforces.com/problemset/problem/41/A
#include <stdio.h>
#include <string.h>

int main ()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int i = 0, j = strlen(a) - 1;
    while (i < j)
    {
        char tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        i++;
        j--;
    }
    
    int flag = 1;
    for (i = 0; i < strlen(a); i++)
    {
        if(a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }
    (flag != 0) ? printf("YES") : printf("NO");
    
}