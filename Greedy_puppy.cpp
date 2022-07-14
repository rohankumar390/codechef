#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a;
        cin >> n >> k;
        for(int i=1;i<=k;i++)
        {
            a=max(a,n%i);
        }
        cout << a << endl;
    }

    return 0;
}