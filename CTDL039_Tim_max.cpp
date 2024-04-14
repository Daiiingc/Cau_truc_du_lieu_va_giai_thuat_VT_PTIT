#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		long long sum = 0;
		for(int i = 0; i < n; i++)
		{
			sum += arr[i] * i;
			sum = sum % MOD;
		}
		cout << sum << endl;
	}
}
