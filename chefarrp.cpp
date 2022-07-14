#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = 0, product = 1;
            for (int j = i; j < n; j++)
            {
                sum = sum + arr[j];
                product = product * arr[j];
                if (sum == product)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}