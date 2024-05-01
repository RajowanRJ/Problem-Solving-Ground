// Starting in the name of Almighty Allah
// https://codeforces.com/problemset/problem/158/A
#include <stdio.h>
int NextRound (int n, int a[], int k);

int main ()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("%d", NextRound(n, a, k));
}

int NextRound (int n, int a[], int k)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            if(a[i] >= a[k-1])
            flag++;
            else
            break;
        }
    }
    return flag;
}