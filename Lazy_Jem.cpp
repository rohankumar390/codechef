#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long int n,b,m,ans=0;
	    cin >>n >>b >>m;
	    while(n!=0){
	        if(n%2==0){
	            ans=ans+(n/2)*m;
	            ans=ans+b;
	            n=n-n/2;
	            m=2*m;
	        }
	        else if(n==1){
	            ans=ans+m;
	            break;
	        }
	        else{
	            ans=ans+((n+1)/2)*m;
	            ans=ans+b;
	            n=n-((n+1)/2);
	            m=2*m;
	        }
	        
	    }
	    cout <<ans<<"\n";
	}
	return 0;
}
