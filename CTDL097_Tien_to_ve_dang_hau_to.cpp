//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int t;
//	string temp,s;
//	cin >> t;
//	while(t--)
//	{
//		cin >> s;	
//		stack<string> st;
//		for(int i = 0; i < s.size(); i++)
//		{
//			temp = "";
//			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
//			{
//				temp += st.top();
//				st.pop();
//				temp = s[i] + st.top() + temp;
//				st.pop();
//				st.push(temp);
//			}
//			else st.push(temp+s[i]);
//		}
//		while(st.size())
//		{
//			cout << st.top();
//			st.pop();
//		}
//		cout << endl;
//	}
//}

// Chuyen doi tu hau to sang dang tien to

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string ts = "+-*/^";
bool check(char c)
{
    for (int i = 0; i < ts.size(); i++)
        if (ts[i] == c)
            return 1;
    return 0;
}
bool Var(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s, k, ans;
        cin >> s;
        stack<string> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (Var(s[i]))
                st.push(string(1, s[i]));
            if (check(s[i]))
            {
                k = st.top();
                st.pop();
                k = s[i] + k;
                k = st.top() + k;
                st.pop();
                k = "(" + k + ")";
                st.push(k);
            }
        }
        s = st.top();
        while (!st.empty())
            st.pop();
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (Var(s[i]))
                ans = s[i] + ans;
            if (check(s[i]))
                st.push(string(1, s[i]));
            if (s[i] == '(')
            {
                ans = st.top() + ans;
                st.pop();
            }
        }
        while (!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << endl;
    }
}
