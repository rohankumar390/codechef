#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    ll a,b,c;
    while(n--){
            cin>>a>>b>>c;
            if(c&1)
            {
                a*=2;
            }
            if(a<b)
            {
                swap(a,b);
            }
            
       
            cout<<a/b<<endl;    
    }
    
    return 0;
}