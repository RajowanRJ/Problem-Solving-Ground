// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, x = 0, r = 0, z;
    cin >> n;
    z = n;
    while (n != 0) {
        x = n % 10;
        r = r * 10 + x;
        n = n / 10;
    }
    (z == r) ? cout << r << endl << "YES\n" : cout << r << endl << "NO\n";
     
}