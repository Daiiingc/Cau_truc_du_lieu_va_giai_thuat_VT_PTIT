//#include <bits/stdc++.h>
//using namespace std;
//
//#define MAX 1000
//int Start[MAX], Finish[MAX], n, XOPT[MAX], dem=0;
//
////Sap xep tang dan theo thoi gian ket thuc cac hanh dong
//void Sap_xep(void) {
//	for(int i=1; i<=n-1; i++)
//	{
//		for(int j=i+1; j<=n; j++)
//		{
//			if(Finish[i]> Finish[j])
//			{
//				int t = Finish[i]; Finish[i]=Finish[j];Finish[i]=t;
//				t = Start[i];Start[i]=Start[j];Start[i]=t;
//			}
//		}
//	}
//}
//
//void Sap_xep_cong_viec(void){ //Thuat toan tham lam
//	Sap_xep();
//	int i=1; XOPT[i]=true; dem=1; //Buoc 2. Khoi tao
//	for(int j=2; j<=n; j++)//Buoc 3: lap
//	{
//		if(Finish[i]<=Start[j])
//		{
//			dem++; 
//			i = j; 
//			XOPT[i]=true;
//		}
//	}
//	cout << dem << endl;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while(t--)
//	{
//		cin >> n;
//		for(int i = 1; i <= n; i++) cin >> Start[i];
//		for(int i = 1; i <= n; i++) cin >> Finish[i];
//		Sap_xep_cong_viec();
//	}
//}

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
	int t; 
	cin >> t;
	int n;
	while(t--)
	{
		cin >> n;
		vector<pair<int,int>> vp(n);
		for(int i = 0; i < n; i++) cin >> vp[i].first;
		for(int i = 0; i < n; i++) cin >> vp[i].second;
		
		sort(vp.begin(), vp.end(),cmp);
		int count = 1, cur = vp[0].second;
		for(int i = 1; i < n; i++)
		{
			if(vp[i].first >= cur)
			{
				count++;
				cur = vp[i].second;
			}
		}
		cout << count << endl;
	}
}