#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ans = __gcd(arr[0], arr[1]);
        for (int i = 2; i < n; i++)
        {
            ans = __gcd(ans, arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] / ans << " ";
        }
        cout << endl;
    }

    return 0;
}