#include <bits/stdc++.h>
using namespace std;

long long Bin_to_decimal(string binary)
{
	long long num = 0, co_so = 0;
	for(int i = binary.size() - 1; i >= 0; i--)
	{
		num += pow(2,co_so)*(binary[i] -'0');
		co_so++;
	}
	return num;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string bin1, bin2;
		cin >> bin1 >> bin2;
		cout << Bin_to_decimal(bin1) * Bin_to_decimal(bin2) << endl;		
	}
}
