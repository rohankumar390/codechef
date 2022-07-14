#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
int n;
char ch[n];
cin>>t;
while (t--)
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>ch[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (ch[i]=='Y')
        {
            cout<<"NOT INDIAN"<<endl;
            break;
        }
        else if (ch[i]=='I'){
            cout<<"INDIAN"<<endl;
            break;
        }
        else if(ch[i]!='Y'&&ch[i]!='I')
        {
            cout<<"NOT SURE"<<endl;
        }
   
    }
    
    
    
}

return 0;
}