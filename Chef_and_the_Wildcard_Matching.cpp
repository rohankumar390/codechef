#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int flag = -1;
        string s1;
        string s2;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.size(); i++)
        {

            if (s1[i] == '?' || s2[i] == '?')
            {
                flag = 1;
            }
            else if (s1[i] == s2[i])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag = 1)
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