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
		long long arr1[n],arr2[n];
		
		for(int i = 0; i < n; i++)
		{
			cin >> arr1[i];
		}
		sort(arr1,arr1+n);
		
		for(int i = 0; i < n; i++)
		{
			cin >> arr2[i];
		}
		sort(arr2,arr2+n,greater<int>());
		
		long long sum = 0;
		for(int i = 0; i < n; i++)
		{
			sum += arr1[i] * arr2[i];
			sum = sum % MOD;
		}
		cout << sum << endl;
	}
}
