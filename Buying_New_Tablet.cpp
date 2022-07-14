#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int Number_of_tab, Budget, x = 0;
        cin >> Number_of_tab >> Budget;
        for (int i = 0; i < Number_of_tab; i++)
        {
            int Width_of_tab, Height_of_tab, Price_of_tab;
            cin >> Width_of_tab >> Height_of_tab >> Price_of_tab;
            if (Price_of_tab > Budget)
            {
                continue;
            }
            else
            {
                if (Width_of_tab * Height_of_tab > x)
                {
                    x = Width_of_tab * Height_of_tab;
                }
            }
        }
        if (x == 0)
        {
            cout << "no tablet" << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
    return 0;
}