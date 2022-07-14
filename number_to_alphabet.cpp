#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a;
    cin >> a;
    int x = a % 10;
    a = a / 10;
    cout << a;
    if (x == 0)
    {
        cout << "a";
    }
    else if (x == 1)
    {
        cout << "b";
    }
    else if (x == 2)
    {
        cout << "c";
    }
    else if (x == 3)
    {
        cout << "d";
    }
    else if (x == 4)
    {
        cout << "e";
    }
    else if (x == 5)
    {
        cout << "f";
    }
    else if (x == 6)
    {
        cout << "g";
    }
    else if (x == 7)
    {
        cout << "h";
    }
    else if (x == 8)
    {
        cout << "i";
    }
    else if (x == 9)
    {
        cout << "j";
    }
    return 0;
}