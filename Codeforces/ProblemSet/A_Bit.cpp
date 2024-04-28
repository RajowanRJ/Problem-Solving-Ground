// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if (str == "++x" || str == "x++" || str == "++X" || str == "X++")
        x += 1;
        else if (str == "--x" || str == "x--" || str == "--X" || str == "X--")
        x -= 1;
    }
    cout << x;
}