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
		stack<string> st;
		for(int i = s.size() - 1; i >= 0; i--)
		{
			string temp = "";
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				temp += st.top() + s[i];
				st.pop();
				temp += st.top();
				st.pop();
				temp = '(' + temp + ')';
				st.push(temp);
			}	
			else
			{
				st.push(temp + s[i]);	
			}	
		}
		while(!st.empty())
		{
			cout << st.top();
			st.pop();
		}
		cout << "\n";
	}
}	
