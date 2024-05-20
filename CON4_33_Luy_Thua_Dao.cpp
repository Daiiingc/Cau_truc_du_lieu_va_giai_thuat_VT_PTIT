#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

long long powerMod(long long a, long long n) {
    if (n == 0)
        return 1;

    long long res = 1;
    a = a % MOD;

    while (n > 0) {
        if (n & 1)
            res = (res * a) % MOD;

        a = (a * a) % MOD;
        n = n >> 1;
    }

    return res;
}

long long Dao_so(long long n)
{
	long long res = 0;
	while(n != 0)
	{
		int i = n % 10;
		n /= 10;
		res = res*10 + i;
	}
	return res;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		cout << powerMod(n,Dao_so(n)) << '\n';
	}
}
