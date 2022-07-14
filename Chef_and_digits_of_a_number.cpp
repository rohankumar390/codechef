#include <bits/stdc++.h>
using namespace std;
int main()
{

    string n;
    int count1 = 0, count2 = 0;
    cin >> n;
    for (char ch : n)
    {

        if (ch == '0')

            count2++;
        else
            count1++;
    }
    if (count1 == 1 || count2 == n.length() - 1)
    {
        cout << "YES" << endl;
    }
    else if (count2 == 1 || count1 == n.length() - 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}