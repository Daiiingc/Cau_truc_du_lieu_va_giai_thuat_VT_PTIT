#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string bin;
		cin >> bin;
		cout << bin[0];
		for(int i = 1; i < bin.size(); i++)
		{
			if(bin[i]!=bin[i-1]) cout << 1;
			else cout << 0;
		}
		cout << endl;	
	}	
}