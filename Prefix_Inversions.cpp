#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count = 0;
    string s;
    cin >> s;
    int a = s.length() - 1; // '\0'

    for (int i = a; i >= 0; i--)
    {
        if (s[i] == '1')

        {
            count++;
            for (int j = 0; j <= i; j++)
            {

                if (s[j] == '0')
                {
                    s[j] = '1';
                }
                else
                {
                    s[j] = '0';
                }
            }
        }
    }

    cout << s << " and " << count;
    return 0;
}
