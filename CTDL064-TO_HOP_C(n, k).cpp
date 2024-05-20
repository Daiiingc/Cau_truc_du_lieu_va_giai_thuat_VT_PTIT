#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 1005;

int C[MAX][MAX];
void To_hop()
{
	C[0][0] = 1;
	for(int i = 1; i < MAX; i++)
	{
		C[i][0] = 1;
		for(int j = 1; j < MAX; j++)
		{
			C[i][j] = (C[i-1][j-1] % MOD + C[i-1][j] % MOD) % MOD;
		}
	}
}


int main()
{
	To_hop();
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		cout << C[n][k] << endl;
	}
}
