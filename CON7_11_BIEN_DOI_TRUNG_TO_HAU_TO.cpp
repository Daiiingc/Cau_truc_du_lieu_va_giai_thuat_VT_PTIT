#include <bits/stdc++.h>
using namespace std;

int degree(char c)
{
    if(c == '^') return 5;
    if(c == '*' || c == '/') return 4;
    if(c == '+' || c == '-') return 3;
    return 2;
}

int main()
{
	int t;
	cin >> t;
	string s;
	while(t--)
	{
		cin >> s;
		stack<char> stk;
		string ans = "";
		for(int i = 0; i <= s.size() - 1; i++)
		{
			if(isalpha(s[i])) ans += s[i];
			else if(s[i] == '(') stk.push(s[i]);
			else if(s[i] == ')')
			{
				while(stk.size() && stk.top() != '(')
				{
					ans += stk.top();
					stk.pop();
				}
				stk.top();
			}
			else if(s[i] == '+' ||s[i] == '-' ||s[i] == '*' ||s[i] == '/')
			{
				while(stk.size() && degree(stk.top()) >= degree(s[i]))
				{
					ans += stk.top();
					stk.pop();
				}
				stk.push(s[i]);
			}
		}
		while(stk.size())
		{
			if(stk.top() != '(') ans += stk.top();
			stk.pop();
		}
        cout << ans << endl;
	}
}
