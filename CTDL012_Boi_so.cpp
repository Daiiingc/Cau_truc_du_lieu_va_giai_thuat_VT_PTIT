#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

void Tao_mang_ket_qua()
{
	long long num = 9;
	v.push_back(num);
	while(num * 10 <= 999999999)
	{
		int s = v.size();
		num*=10;
		v.push_back(num);
		for(int i = 0; i < s; i++) v.push_back(num + v[i]);
	}
}

int main()
{
	Tao_mang_ket_qua();
	int t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int index = 0;
		while(v[index] % n) index++;
		cout << v[index] << endl;
	}
}
