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
        int x[11] = {0};
        while (n--)
        {
            int problem, score;
            cin >> problem >> score;
            if (score > x[problem])
            {
                x[problem] = score;
            }
        }
        int p = 0;
        for (int i = 1; i <= 8; i++)
        {
            p = p + x[i];
        }
        cout << p << endl;
    }
    return 0;
}