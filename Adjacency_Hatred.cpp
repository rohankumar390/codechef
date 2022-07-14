#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum += abs(arr[i] - arr[j]);
            }
        }
        if (sum % 2 != 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}