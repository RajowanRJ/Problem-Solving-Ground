//Starting in the name of Almighty Allah
//https://codeforces.com/problemset/problem/4/A

#include <stdio.h>

int main ()
{
    int w, x = 2;
    scanf("%d", &w);

    while (1)
    {
        if(w == 2){
            printf("NO\n");
            break;
        }
        else if (x % 2 == 0 && (w - x) % 2 == 0) {
            printf("YES\n");
            break;
        }
        else {
            printf("NO\n");
            break;
        }
        x++;
    }
    
}