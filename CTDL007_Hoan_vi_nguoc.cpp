#include <bits/stdc++.h>
using namespace std;

int n, a[100]; 
bool daxet[100];
vector<vector<int>> v;
int dem;

void in()
{
	for(int i = v.size() - 1; i >= 0; i--)
	{	
		for(int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j];
		}
		cout << " ";
	}
	cout << endl;
}


void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(daxet[j] == 0)
		{
			a[i] = j;
			daxet[j] = true;
			if(i == n)
			{
				vector<int> b;
				for(int k = 1; k <= n; k++)
					b.push_back(a[k]);	
				v.push_back(b);
			}
			else Try(i+1);
			daxet[j] = 0;		
		}
	}
}



int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		v.clear();
		memset(daxet,false,sizeof(daxet));
		dem = 0;
		Try(1);
		in();
	}
}
