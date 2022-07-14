#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = INT_MIN, x;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            x = (a[i] * 20) - (b[i] * 10);
            if (x > max)
            {
                max = x;
            }
            if (x < 0)
            {
                max = 0;
            }
        }
        cout << max << endl;
    }
    return 0;
}