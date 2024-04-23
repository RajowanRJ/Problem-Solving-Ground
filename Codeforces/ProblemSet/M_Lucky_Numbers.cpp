// Starting in the name of Almighty Allah
#include <iostream>
using namespace std;

int main ()
{
    int x, i, a, b, c = 0;

    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        int lucky = 0;
        x = i;
        while (x) {
            if (x % 10 != 4 && x % 10 != 7) {
                lucky++;
            }
            x /= 10;
        }
        if (lucky == 0) {
            cout << i << " ";
            c++;
        }
    }
    if (c == 0) {
        cout << -1;
    }
    
}