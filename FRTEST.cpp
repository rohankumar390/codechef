#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	set<int>distinct;
	cin>>n;
	while(n--){
	    int t;
	    cin>>t;
	    int arr[t];
	    for(int i=0;i<t;i++){
	        cin>>arr[i];
	        distinct.insert(arr[i]);
	        
	    }
	    cout<<distinct.size()<<endl;
	}
	return 0;
}
