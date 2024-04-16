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
		for(int i = s.size() - 1; i >= 0; i--)
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
					st.push(tmp1 - tmp2);
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
					st.push(tmp1 / tmp2);
					break;
				case '%':
					tmp1 = st.top();
					st.pop();
					tmp2 = st.top();
					st.pop();
					st.push(tmp1 % tmp2);
					break;
				case '^':
					tmp1 = st.top();
					st.pop();
					tmp2 = st.top();
					st.pop();
					tmp = tmp2;
					for(int i = 0; i < tmp1 - 1; i++) tmp *= tmp2;
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
