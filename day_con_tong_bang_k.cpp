// Dãy con có t?ng b?ng k
#include <bits/stdc++.h>
using namespace std;
#define MAX 10

int A[MAX]; 
int X[MAX];
int n, k, soptX;

void hienthi()
{
	cout << "[";
	for(int i = 1; i < soptX; i++) cout << X[i] << " ";
	cout << X[soptX] << "]";
}


void tohopK(int i, int tong)
{
	for(int j = i + 1; j <= n; j++)
	{
		if(tong + A[j] <= k)
		{
			X[++soptX] = A[j];
			if(tong + A[j] == k) hienthi();
			else tohopK(j, tong + A[j]);
			soptX--;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> A[i];
		soptX = 0;
		tohopK(0,0);
		cout << endl;
	}
	return 0;
}