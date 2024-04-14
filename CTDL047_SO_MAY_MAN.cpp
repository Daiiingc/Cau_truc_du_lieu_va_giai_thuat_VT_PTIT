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
		int cnt_4 = 1e5, cnt_7 = 1e5;
		int d4 = 0, d7 = 0;
		bool flag = 0;
		for(int i = 0; i <= n; i++)
		{
			if(n >= 4*i && (n-4*i)%7 == 0)
			{
				d4 = i;
				d7 = (n-4*i)/7;
				if(cnt_4 + cnt_7 > d4 + d7)
				{
					cnt_4 = d4;
					cnt_7 = d7;
				}
			}
			if(4*cnt_4 + 7*cnt_7 == n)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1) 
		{
			for(int i = 0; i < cnt_4; i++) cout << 4;
			for(int i = 0; i < cnt_7; i++) cout << 7;
		}
		else cout << -1;
		cout << '\n';
	}
}
