#include <bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin>>n;
       while(n--){
           int t;
           cin>>t;
           int sum=0;
           while(t>0){
               sum=sum+(t*t);
               t=t-2;
           }
           cout<<sum<<endl;
       }
return 0;
}