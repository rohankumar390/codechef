#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, e = 0, o = 0;
        cin >> n;
        int weapons[n];
        for (int i = 0; i < n; i++)
        {
            cin >> weapons[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((weapons[i]) % 2 == 0)
            {
                e++;
            }
            else if ((weapons[i]) % 2 != 0)
            {
                o++;
            }
        }

        if (e > o)
        {
            cout << "READY FOR BATTLE";
        }
        else
        {
            cout << "NOT READY";
        }
    }
    return 0;
}