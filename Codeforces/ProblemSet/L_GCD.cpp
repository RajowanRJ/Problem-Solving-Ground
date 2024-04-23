// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b, c, d, r;
    cin >> a >> b;
    c = a;
    d = b;

    while (d != 0)
    {
        r = c % d;
        c = d;
        d = r;
    }
    cout << c << endl;
    
}