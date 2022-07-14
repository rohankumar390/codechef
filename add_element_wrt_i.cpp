#include <bits/stdc++.h>
using namespace std;
int main(){

// int arr[n];
vector<int>vec;
     int n;
    cin>>n;

for (int i = 0; i < n; i++)
{
    vec.push_back(i);
}
 for (auto i = vec.begin(); i != vec.end(); ++i)
        cout << *i << " ";
return 0;
}