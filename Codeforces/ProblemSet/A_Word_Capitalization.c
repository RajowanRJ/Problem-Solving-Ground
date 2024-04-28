// Starting in the name of Almighty Allah
// https://codeforces.com/problemset/problem/281/A
#include <stdio.h>
#include <string.h>

int main ()
{
    char a[1001];
    scanf("%s", a);

    if (a[0] >= 'a' && a[0] <= 'z')
    {
        a[0] -= 32;
    }
    printf("%s", a);    
}