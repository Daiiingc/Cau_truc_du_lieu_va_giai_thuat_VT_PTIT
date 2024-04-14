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
		int A[n];
		for(int i = 1; i <= n; i++) cin >> A[i];
		sort(A+1,A+n+1);
		int x = 0, y = 0;
		for(int i = 1; i <= n; i++)
		{
			if(i % 2 == 0) y = y*10 + A[i];
			else x = x*10 +A[i];
		}
		cout << x+y << '\n';
	}
}
