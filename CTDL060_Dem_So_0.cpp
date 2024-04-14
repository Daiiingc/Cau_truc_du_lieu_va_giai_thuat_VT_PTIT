//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while(t--)
//	{
//		int n;
//		cin >> n;
//		int a[n];
//		for(int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//		}
//		int vi_tri = lower_bound(a,a+n,1) - a;
//		if(vi_tri == 1) cout << 0 << endl;
//		else if(vi_tri == n) cout << vi_tri << endl;
//		else cout << vi_tri - 1 << endl;
//		
//	}
//}

#include <bits/stdc++.h>
using namespace std;

int Zero_Pos(int a[], int n)
{
	int low = 0, high = n; // n + 1 phan tu bao gom co lính canh
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(a[mid] == 1)
		{
			high = mid;
		}
		else
		{
			low = mid + 1;
		}
		if(low == high && a[low] == 1) return low;
	}
	return n;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		a[n] = 0; // lính canh
		cout <<Zero_Pos(a,n)<< endl;
	}
}