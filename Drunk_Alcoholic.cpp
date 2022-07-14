#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int time,a=0;
        cin >> time;
        while (time > 0)
        {
            if (time % 2 == 0)
            {
                a--;
                time--;
            }
            else
            {
                a += 3;
                time--;
            }
        }
        cout << a;
    }
    return 0;
}