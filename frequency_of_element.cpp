#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct compare
{
    int val;
    compare(int const &i) : val{i} {}

    bool operator()(const int &i) const
    {
        return (i == val);
    }
};
int main()
{
    int value = 9;
    vector<int> vec = {1, 2, 2, 2, 2};
    int freq = count_if(vec.begin(), vec.end(), compare(value));
    return 0;
}