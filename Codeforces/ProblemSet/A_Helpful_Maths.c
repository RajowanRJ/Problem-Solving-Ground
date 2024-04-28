// Starting in the name of Almighty Allah
// https://codeforces.com/problemset/problem/339/A
#include <stdio.h>
#include <string.h>

int main ()
{
    char n[101];
    scanf("%s", n);

    for (int i = 0; i < strlen(n) - 1; i += 2)
    {
        for (int j = i + 2; j < strlen(n); j += 2)
        {
            if (n[i] > n[j])
            {
                char tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
        
    }
    printf("%s", n);
}