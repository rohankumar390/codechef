#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a % 5 == 0 || a % 10 == 0)
        {
            if (a % 10 == 0)
            {
                cout << "0" << endl;
            }

            else
            {
                cout << "1" << endl;
                break;
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}