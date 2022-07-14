#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        char s[100000];
        cin >> s;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == '1')
            {
                count++;
                while (s[i] == '1')
                {
                    i++;
                }
                if (count > 1)
                {
                    break;
                }
            }
        }
        if (count == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}