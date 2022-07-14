#include <iostream>
using namespace std;

int main() {
	int tests;
	cin >> tests;
	while(tests--)
	{
	    bool flag = false;
	    string s;
	    cin >> s;
	    for(int i=0; i<s.length()-1; i+=2)
	    {
	        if((s[i]=='A'&&s[i+1]=='B') || (s[i]=='B'&&s[i+1]=='A'))
	            continue;
	        else
	        {
	            flag = true;
	            break;
	        }
	    }
	    if(flag == false)
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	
	return 0;
}
