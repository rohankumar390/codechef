#include <bits/stdc++.h>
using namespace std;
struct sum1
{
	int a;
} s2;
struct sum2
{
	int b;

} s1;
void display(int n)
{
	cout << n;
}
struct sum3
{
	int x = s2.a + s1.b;
};
int main()
{
	s2.a = 4, s1.b = 5;
	struct sum3 addition;
	int c = addition.x;
	display(c);
	return 0;
}