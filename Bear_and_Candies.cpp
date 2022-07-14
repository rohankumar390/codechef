

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t, a, b, i, x;
   

    cin >> a >> b;

    i = 1;
    while (1)
    {
        if (a - i < 0 && i % 2 != 0)
        {
            x = 1;
            break;
        }
        else if (b - i < 0)
        {
            x = 2;
            break;
        }
        if (i % 2 != 0)
        {
            a = a - i;
        }
        else
        {
            b = b - i;
        }
        i++;
    }
    if (x == 1)
    {
        cout << "Bob";
    }
    else if (x == 2)
    {
        cout << "Limak";
    }
}