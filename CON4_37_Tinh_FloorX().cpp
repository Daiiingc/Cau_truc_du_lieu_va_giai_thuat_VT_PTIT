#include <bits/stdc++.h>
using namespace std;

long long Floor(long long n, long long A[], long long x)
{
	long long l = 0, r = n - 1;
	long long res = -2;
	while(l <= r)
	{
		long long mid = l + (r - l)/2;
		if(A[mid] <= x)
		{
			res = mid;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return res + 1;
}

int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		long long n, x;
		cin >> n >> x;
		long long A[n+1];
		for(long long i = 0; i < n; i++) cin >> A[i];
		sort(A,A+n);
		cout << Floor(n,A,x) << '\n';
	}
}
