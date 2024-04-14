#include <bits/stdc++.h>
using namespace std;

long long G[93];

void Solve(long long n, long long i)
{
	while(n > 2)
	{
		if(i <= G[n-2]) n -= 2;
		else
		{
			i -= G[n-2];
			n -= 1;
		}
	}
	if(n == 1) cout << 'A' << endl;
	else cout << 'B' << endl;
}


int main()
{
	G[1] = G[2] = 1;
	for(int i = 3; i < 93; i++)
	{
		G[i] = G[i-2] + G[i-1];
	}
	int t;
	cin >> t;
	while(t--)
	{
		long long n,i;
		cin >> n >> i;
		Solve(n,i);
		
	}
}
