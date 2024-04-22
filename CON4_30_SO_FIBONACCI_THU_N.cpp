#include <bits/stdc++.h>
using namespace std;

const long long mod = 10e9 + 7;

long long fibo(int n)
{
	long long f1 = 1;
	long long f2 = 1;
	long long fn;
	if(n < 3) return 1;
	else
	{
		for(int i = 3; i <= n; i++)
		{
			fn = (f1 + f2)%mod;
			f1 = f2;
			f2 = fn;
		}
	}
	return fn;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << fibo(n) << '\n';
	}
}
