// 325 + 5 =8710
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n ;
    int x ;
    cin>>n>>x;
    int digits = (int)log10(n);
    int first = n / pow(10, digits); //1
    int last = (n % 10);             // 3
    int a = first * pow(10, digits); //->100
    int b = n % a;                   // -> 23
    n = (b / 10) + x;
    first = first + x;
    last = last + x;
    // cout << "First number is " << first << endl;
    // cout << "Center Wala number is " << n << endl;
    // cout << "Last number is " << last << endl;
    // cout << "(int)log10(last) + 1 is " << (int)log10(last) + 1 << endl;
    // cout << "(int)log10(first) + 1 " << (int)log10(first) + 1 << endl;
    // cout << "(int)log10(n) + 1 "<< (int)log10(n) + 1  << endl;
    int nn = last  + first * pow(10, (int)log10(n) + 1)*pow(10, (int)log10(n) + 1) + n * pow(10, (int)log10(n) + 1);
    cout << nn;
    return 0;
}