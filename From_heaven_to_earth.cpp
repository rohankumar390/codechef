#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, v1, v2;
        float t1,t2, d1, d2;
        cin >> n >> v1 >> v2;
        d1 = sqrt(2) * n;
        d2 = 2 * n;
        t1 = (float)d1 / (float)v1;
        t2 = (float)d2 / (float)v2;
        if (t2 < t1)
            cout << "Elevator" << endl;
        else if (t1 < t2)
            cout << "Stairs" << endl;
    }
    return 0;
}