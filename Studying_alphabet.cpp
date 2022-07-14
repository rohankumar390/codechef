#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	   int n;
	   string s1,s2;
	   cin>>s1>>n;
	   while (n--)
	   {
		   int cnt = 0;
        cin >> s2;
		   for (int i = 0; i < s1.length(); i++)
		   {
			  for (int j = 0; j < s2.length(); j++)
			  {
				  if (s1[i]==s2[j])
				  {
					 cnt++;
				  }
				  
			  }
			  
		   }
		   if (cnt==s2.length())
		     cout << "Yes\n";
        else
            cout<<"No\n";
		   
		   
	   }
	   
	   
return 0;
}