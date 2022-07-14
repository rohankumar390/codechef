#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int i=0;
    string s1,s2;
    cin>>s1>>s2;
    // while(s1[i]!=s2[i]){
    //     int temp=s2.length();
    //     char s=s2[temp];
    //     for (int i = 0; i < s2.length(); i++)
    //     {
    //             s1[i]=s1[i+1];
    //     }
        
    // }
    for (int i = 0; i <=s2.length(); i++)
        {
                s2[i]=s2[i+1];
        }
        cout<<s2.length();
    
    return 0;
}
