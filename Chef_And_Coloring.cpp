#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len, cR = 0, cG = 0, cB = 0;
        cin >> len;
        string s;
        cin >> s;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'R')
            {
                cR++;
            }
            else if (s[i] == 'G')
            {
                cG++;
            }
            else if (s[i] == 'B')
            {
                cB++;
            }
        }
        int o = max(max(cR, cG), cB);
        cout << len - o << endl;
    }
    return 0;
}