#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n], b[n]={0};
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		
		cout <<'[';
		for(int j = 1; j <= n; j++)
		{
			cout << a[j];
			if(j == n) cout << ']';
			else cout << ' ';	
		}
		cout << endl; 
		
		for(int i = 1; i < n; i++)
		{
			for(int j = 1; j <= n - i; j++)
			{
				b[j] = a[j] + a[j+1];
			}
			cout <<'[';
			for(int j = 1; j <= n - i; j++)
			{
				cout << b[j];
				if(j == n - i) cout << ']';
				else cout << ' ';
				a[j] = b[j];	
			}
			cout << endl; 
		}
	}
}
