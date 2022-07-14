#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        unordered_map<int, int> m{
            {0, 6}, {1, 2}, {2, 5}, {3, 5}, {4, 4}, {5, 5}, {6, 6}, {7, 3}, {8, 7}, {9, 6}};
        cin >> a >> b;
        int x = a + b, sum = 0;
        while (x != 0)
        {
            int num = x % 10;
            x /= 10;
            sum += m[num];
        }
        cout << sum << endl;
    }
    return 0;
}