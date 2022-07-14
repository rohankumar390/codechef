#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        int count = 0, maxdiff = 0, mindiff = 0;
        cin >> str1 >> str2;
        for (int i = 0; i < str1.size(); i++)
        {
            if (str1.at(i) == str2.at(i) && str1.at(i) == '?')
                count++;
            else if (str1.at(i) != str2.at(i))
            {
                if (str1.at(i) == '?' || str2.at(i) == '?')
                {
                    maxdiff++;
                }
            
            else
                mindiff++;}
        }
        cout<<mindiff<<" "<<mindiff+maxdiff+count<<endl;
    }
    return 0;
}