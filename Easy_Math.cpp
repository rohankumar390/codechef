#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
       int t;
       cin>>t;
       while(t--){
           int k,sum=0;
           cin>>k;
           int arr[k+2];
           for (int i = 1; i <=k; i++)
           {
               cin>>arr[i];
           }
           for (int i = 1; i<=k; i++)
           {
               for (int j = i; j<=k; j++)
               {
                   int sum1=0;
                   int n=arr[i]*arr[j+1];
                   while(n>0){
                       sum1=sum1+(n%10);
                       n/=10;
                   }
                   if(sum<sum1){
                       sum=sum1;
                   }
               }
           }
               cout<<sum;
           
       }
return 0;
}