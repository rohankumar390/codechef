#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
	int m,n;
	cin>>m>>n;
	int c=__gcd(m,n);
	cout<<(m/c)*(n/c)<<endl;
}
	return 0;
}