#include <bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		string s[10000];
		cin >> n;
		int l = pow(2,n); // so luong ma gray có do dai n;
		s[1] = "0";
		s[2] = "1";
		if(n > 1)
		{
			int vt = 2; // vi tri lay doi xung
			for(int i = 2; i <= n; i++) // lan luot tinh cac ma gray
			{
				int k = pow(2,i);
				for(int j = 1; j <= vt; j++)
				{
					s[k-j+1] = "1" + s[j];
					s[j] = "0" + s[j];
				}
				vt = k;
			}
			
		}
		for(int j = 1; j <= l; j++) cout << s[j] << " ";
		cout << endl;
	}
}
