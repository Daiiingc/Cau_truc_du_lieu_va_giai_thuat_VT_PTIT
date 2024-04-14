#include <bits/stdc++.h>
using namespace std;

string s;

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
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '1')
	{
		s[i] = '0';
		i--;
	}
	if(i == -1) return;
	else s[i] = '1';
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{	
		cin >> s;
		sinh();
		in();	
	}
}


//#include <bits/stdc++.h>
//using namespace std;
//
//void in(string s)
//{
//	for(int i = 0; i < s.size(); i++)
//	{
//		cout << s[i];
//	}
//	cout << endl;
//}
//
//void sinh(string &s)
//{
//	int i = s.size() - 1;
//	while(i >= 0 && s[i] == '1')
//	{
//		s[i] = '0';
//		i--;
//	}
//	if(i == -1) return;
//	else s[i] = '1';
//}
//
//
//int main()
//{
//	int t;
//	cin >> t;
//	
//	while(t--)
//	{
//		string s;
//		cin >> s;
//		sinh(s);
//		in(s);	
//		//s.clear();
//	}
//}