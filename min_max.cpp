#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, t;
    cin>>t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n,greater<int>());
        cout << arr[1];
    }
    return 0;
}