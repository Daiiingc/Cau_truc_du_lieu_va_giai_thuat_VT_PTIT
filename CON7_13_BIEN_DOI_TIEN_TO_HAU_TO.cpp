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
		stack<char> st_char;
		stack<string> st_string;
		string kq = "";
		for(int i = s.size() - 1; i >= 0; i--)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				if(!st_char.empty())
				{
					char t1 = st_char.top();
					st_char.pop();
					char t2 = st_char.top();
					st_char.pop(); 
					kq = t1 + t2 + s[i];
					st_string.push(kq); 
				}
				else if(!st_string.empty())
				{
					string str1 = st_string.top();
					st_string.pop();
					string str2 = st_string.top();
					st_string.pop(); 
					kq = str1 + str2 + s[i];
					st_string.push(kq); 
				}
			}
			else
			{
				st_char.push(s[i]);
			}
		}
		cout << st_string.top() << endl;
		st_string.pop();
	}
}
