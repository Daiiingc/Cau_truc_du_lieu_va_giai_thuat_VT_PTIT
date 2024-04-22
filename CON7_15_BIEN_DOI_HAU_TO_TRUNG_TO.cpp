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
		for(int i = 0; i <= s.size() - 1; i++)
		{
			string temp = "";
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				string t1 = st.top();
				st.pop();
				string t2 = st.top();
				st.pop();
				temp = '(' + t2 + s[i] + t1 + ')';
				st.push(temp);
			}
			else
			{
				st.push(temp + s[i]);
			}
		}
		cout << st.top() << '\n';
	}
}
