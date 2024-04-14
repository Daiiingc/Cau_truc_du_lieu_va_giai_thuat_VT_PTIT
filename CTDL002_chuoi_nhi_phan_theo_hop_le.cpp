#include <bits/stdc++.h>
using namespace std;

string s;
int a[1000],n, ok;

void in()
{
	for(int i = 0; i < s.size(); i++)
	{
		cout << s[i];
	}
	cout << endl;
}

void sinh()
{
	int i = n - 1;
	while(s[a[i]] == '1')
	{
		s[a[i]] = '0';
		i--;
	}
	
	s[a[i]] = '1';
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> s;
		n = 0;
		ok = 1;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == '?')
			{
				s[i] = '0';
				a[n] = i;
				n++;
			}
		}
		in();
		for(int i = 1; i < pow(2,n); i++)
		{
			sinh();
			in();
		}
		s = "";
	}
}