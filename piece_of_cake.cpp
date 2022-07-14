#include <bits/stdc++.h>
using namespace std;
int main()
{
   unordered_map<char, int> m;
   int count = 0, max = 0;
   string input;
   cin >> input;
   for (int i = 0; i < input.size(); i++)
   {
      if (m.find(input[i]) == m.end())
      {
         m[input[i]] = 1;
      }
      else
         ++m[input[i]];
   }

   unordered_map<char, int>::iterator it;
   for (it = m.begin(); it != m.end(); it++)
   {
      count = count + it->second;
      if (max < it->second)
      {
         max = it->second;
      }
   }
   if (max == count - max)
      cout << "YES" << endl;
   else
      cout << "NO" << endl;
   m.clear();
   return 0;
}