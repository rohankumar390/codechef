#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tests,sum=0;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        int arr[n],temp[n]={0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=arr[i-1])
            temp[i]=temp[i-1]+1;
             sum=sum+temp[i];
        }
     //   int x = (int)n / 2;
        cout << sum << endl;
    }
    return 0;
}