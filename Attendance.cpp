#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iterator>
#include <set>
typedef unsigned long long int ull;
using namespace std;
bool rep(string s1, string s2[], int n)
{
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(s1==s2[i]) c++;
    }
    return c>=2;
}
int main() 
{
    std::cout << std::fixed;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string f[n], l[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>f[i]>>l[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        cout<<f[i];
	        if(rep(f[i], f, n)) cout<<" "<<l[i];
	        cout<<"\n";
	    }
	    
	}
	return 0;
}
