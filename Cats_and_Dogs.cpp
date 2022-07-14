#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long c,d,l;
	    cin>>c>>d>>l;
	    if(l%4 == 0){
	    if(c<=d && l<=(c+d)*4 && l>=(d)*4)
	        cout<<"yes"<<endl;
	    else if(c>=2*d && l<=(c+d)*4 && l>=(c-d)*4 )
	        cout<<"yes"<<endl;
	    else if(c>=d && c<=2*d && l<=(c+d)*4 && l>=d*4)
	        cout<<"yes"<<endl;
	    else
	        cout<<"no"<<endl;
	    }
	    else
	        cout<<"no"<<endl;
	}
	return 0;
}