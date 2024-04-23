// Starting in the name of Almighty Allah
#include <iostream>
using namespace std;

int main ()
{
    int a, b, count = 0, t;
    cin >> t;

    while (t--) {
        cin >> a >> b;

        if (a % b == 0) {
            cout << 0 << endl;
        }
        else {
            cout << b - (a % b) << endl;
        }
    } 
}