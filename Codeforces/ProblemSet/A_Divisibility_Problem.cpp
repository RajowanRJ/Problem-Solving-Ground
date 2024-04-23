// Starting in the name of Almighty Allah
#include <iostream>
using namespace std;

int main ()
{
    int a, b, count = 0, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
            cin >> a >> b;
        if (a % b == 0) {
            count = 0;
        }
        else {
            while (true) {
                if (a % b != 0) {
                    a++;
                    count++;
                }
                else break;
            }
        }
        cout << count << endl;
        count = 0;
    }  
}