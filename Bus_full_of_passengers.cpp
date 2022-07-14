#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, t;
    cin >> t;
    while (t--)
    {
        bool poss = true;
        set<int> bus;
        int n, m;
        cin >> n >> m >> q;
        char ch;
        int i;
         while (q--)
        {
            cin >> ch >> i;
            if (ch == '+')
            {
                if (bus.find(i) != bus.end())

                    poss = false;
                     else
                {
                    bus.insert(i);
                    if (bus.size() > m)

                        poss = false;
                }
            }
            else if (ch == '-')
            {
                if (bus.find(i) == bus.end())

                    poss = false;

                else

                    bus.erase(i);
            }
        }
        if (!poss)
            cout << "Inconsistent" << endl;
        else
            cout << "Consistent" << endl;
    }
    return 0;
}