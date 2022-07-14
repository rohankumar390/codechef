#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m, k;
        cin >> n >> m >> k;
        while (k--)
        {
            if (n > m)

                m += 1;
            if (m > n)
                n += 1;
        }
        cout << abs(n - m) << endl;
    }
    return 0;
}