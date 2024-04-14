// Để AC trên laptrinhptit thì nộp bài CTDL - Mã gray 002

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << s[0];
		int temp = s[0] - '0', x;
		for(int i = 1; i < s.size(); i++)
		{
			x = s[i] - '0';
			if(temp != x)
			{
				temp = 1;
				cout << temp;
			}
			else
			{
				temp = 0;
				cout << temp;
			}
		}
		cout << endl;
	}	
}
