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
		stack<long long> st;
		for(int i = 0; i < s.size(); i++)
		{
			long long tmp1, tmp2, tmp;
			switch(s[i])
			{
				case '+':
					tmp1 = st.top();
					st.pop();
					tmp2 = st.top();
					st.pop();
					st.push(tmp1 + tmp2);
					break;
				case '-':
					tmp1 = st.top();
					st.pop();
					tmp2 = st.top();
					st.pop();
					st.push(tmp2 - tmp1);
					break;
				case '*':
					tmp1 = st.top();
					st.pop();
					tmp2 = st.top();
					st.pop();
					st.push(tmp1 * tmp2);
					break;
				case '/':
					tmp1 = st.top();
					st.pop();
					tmp2 = st.top();
					st.pop();
					st.push(tmp2 / tmp1);
					break;
				case '%':
					tmp1 = st.top();
					st.pop();
					tmp2 = st.top();
					st.pop();
					st.push(tmp2 % tmp1);
					break;
				case '^':
					tmp1 = st.top();
					st.pop();
					tmp2 = st.top();
					st.pop();
					tmp = tmp1;
					for(int i = 0; i < tmp2 - 1; i++) tmp *= tmp1;
					st.push(tmp);
					break;
				default:
					st.push((long long)s[i]-'0');
					break;	
			}	
		}	
		cout << st.top() << '\n';	
	}
}