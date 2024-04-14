#include <bits/stdc++.h>
using namespace std;

int vitri(int arr[100], int k, int l, int r)
{
	if(l>r) return 0;
	else
	{
		int mid = (l+r)/2;
		if(arr[mid] == k) return mid;
		else
		{
			if(arr[mid] > k) return vitri(arr,k,l+1,mid);
			else return vitri(arr,k,mid+1,r);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int arr[n+1];
		for(int i = 1; i <= n; i++)
		{
			cin >> arr[i];
		}
		int kq = vitri(arr,k,1,n);
		if(kq == 0) cout << "NO" << endl;
		else cout << kq << endl;
	}
}
