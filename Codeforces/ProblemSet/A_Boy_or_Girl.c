// Starting in the name of Almighty Allah
// https://codeforces.com/problemset/problem/236/A
#include <stdio.h>
#include <string.h>

int main ()
{
    char a[101];
    scanf("%s", a);
    int cnt[26] = {0}, flag = 0;
    
    for (int i = 0; i < strlen(a); i++)
    {
        cnt[a[i] - 'a']++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (cnt[i - 'a'] > 0)
        flag++;
    }
    if (flag % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!\n");
    }
}