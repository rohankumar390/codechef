#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, x;
	while (t--)
	{
		int n, aodd = 0, aeven = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x % 2 == 0)
			{
				aeven++;
			}
			else
			{
				aodd++;
			}
		}
		int odd = n / 2;
		int even = n / 2;
		if (n % 2 == 1)
		{
			odd++;
		}
		cout << min(odd, aeven) + min(even, aeven) << endl;
	}
	return 0;
}
