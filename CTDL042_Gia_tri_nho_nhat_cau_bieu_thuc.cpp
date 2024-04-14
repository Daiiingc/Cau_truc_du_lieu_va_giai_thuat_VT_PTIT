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
		long long A[n+1],B[n+1];
		for(int i = 1; i <= n; i++) cin >> A[i];
		for(int i = 1; i <= n; i++) cin >> B[i];
		
		sort(A+1,A+n+1);
		sort(B+1,B+n+1,greater<int>());	
		
		long long S = 0;
		
		for(int i = 1; i <= n; i++)
		{
			S += A[i]*B[i];
		}
		cout << S << '\n';
	}
}
