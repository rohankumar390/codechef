#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n], arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        int count = 0;
        if (arr[0] >= arr1[0])
        {
            count++;
        }
        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - arr[i - 1]) >= arr1[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}