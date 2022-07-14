#include <bits/stdc++.h>
using namespace std;
int main(){
       int t;
       cin>>t;
       while (t--)
       {
           int n;
           cin>>n;
           int arr[n];
           for (int i = 0; i < n; i++)
           {
               cin>>arr[i];
           }
           for (int i = 0; i < n; i++)
           {
               for (int j = i+1; j < n; j++)
               {
                   if (arr[i]!=0)
                   {
                       if (arr[i]==arr[j])
                       {
                           arr[i]=arr[j]=0;
                       }
                       }
                   
               }
               
           }
               for (int i = 0; i < n; i++)
               {
                   if (arr[i]!=0)
                   {
                       cout<<arr[i]<<endl;
                   }
                   
               }
           
           
       }
       
return 0;
}