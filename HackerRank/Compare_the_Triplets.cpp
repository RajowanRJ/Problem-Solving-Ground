// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a[3], b[3], Alice = 0, Bob = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i] >> b[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " " << b[i] << " ";
        if(a[i] > b[i]){
            Alice++;
        }
        else if(a[i] < b[i]) {
            Bob++;
        }
        else{

        }
    }
    cout << Alice << " " << Bob << endl;
}