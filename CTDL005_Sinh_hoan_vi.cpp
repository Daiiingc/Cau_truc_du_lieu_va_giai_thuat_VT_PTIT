#include <bits/stdc++.h>
using namespace std;

int A[100], n, ok;

void in()
{
	for(int i = 1; i <= n; i++)
	{
		cout << A[i];
	}
	cout << " ";
}

void sinh()
{
	int j = n - 1;
	while(j>0 && A[j] > A[j+1]) j--;
	
	if(j > 0)
	{
		int k = n;
		while(A[j] > A[k]) k--;
		
		int t = A[j];
		A[j] = A[k];
		A[k] = t;
		
		int r = j + 1, s = n;
		while(r<=s)
		{
			int t = A[r];
			A[r] = A[s];
			A[s] = t;
			r++;s--;		
		}			
	}
	else
	{
		ok = 0;
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			A[i] = i;
		}
		
		ok = 1;
		while(ok)
		{
			in();
			sinh();
		}
		cout << endl;
	}
}
