// Starting in the name of Almighty Allah
// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;

int main ()
{   
    int p, v, t, cnt = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
            
        cin >> p >> v >> t;

        if (p == 1 && v == 1 && t == 1)
        cnt++;
        else if (p == 1 && v == 1)
        cnt++;
        else if (p == 1 && t == 1)
        cnt++;
        else if (v == 1 && t == 1)
        cnt++;
    }
    cout << cnt;
}