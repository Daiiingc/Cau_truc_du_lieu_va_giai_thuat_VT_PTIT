#include <bits/stdc++.h>
using namespace std;

int a[100], n, ok = 1;

void in()
{
	for(int i = 1; i <= n; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
}

void sinh()
{
	int i = n;
	while(a[i] == 1)
	{
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			a[i] = 0;
		}
		while(ok)
		{
			in();
			sinh();
		}
		ok = 1;
	}
}
