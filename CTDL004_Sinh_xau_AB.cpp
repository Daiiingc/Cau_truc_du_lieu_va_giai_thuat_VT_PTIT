#include <bits/stdc++.h>
using namespace std;

int n, ok = 1;
char arr[100];

void in()
{
	for(int i = 1; i <= n; i++)
	{
		cout << arr[i];
	}
	cout << " ";
}

void sinh()
{
	int i = n;
	while(arr[i] == 'B')
	{
		arr[i] = 'A';
		i--;
	}
	if(i == 0) ok = 0;
	else arr[i] = 'B';
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		ok = 1;
		for(int i = 1; i <= n; i++)
		{
			arr[i] = 'A';
		}
		
		while(ok)
		{
			in();
			sinh();
		}
		cout << endl;
	}
}
