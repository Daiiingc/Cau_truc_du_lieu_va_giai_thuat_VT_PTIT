#include <bits/stdc++.h>
using namespace std;
#define MAX 101
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int N, V;
		int A[MAX], C[MAX];
		// Nhap du lieu
		cin >> N >> V;
		for(int i = 1; i <= N; i++) cin >> A[i];
		for(int i = 1; i <= N; i++) cin >> C[i];
		// khoi tao
		int F[MAX] = {0};
		// Tinh bang phuong an
		for(int i = 1; i <= N; i++)
		{
			for(int j = V; j >= 0; j--)
			{
				if(j >= A[i]) F[j] = max(F[j],F[j-A[i]]+C[i]);
				
			}
			//cout << F[i] << endl;
		}
		//ket qua
		cout << F[V] << endl;
	}
	return 0;
}
