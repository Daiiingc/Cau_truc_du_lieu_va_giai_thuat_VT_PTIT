// Liet ke cac xau nhi phan n phan tu co so bit 1 khong qua k
#include <bits/stdc++.h>
using namespace std;

#define MAX 32

int n, k;
int X[MAX];
void In(int n)
{
	for(int i = 1; i <= n; i++) cout << X[i];
	cout << endl;
}

void Dequy(int i, int sobit1)
{
	for(int j = 0; j < 2; j++)
	{
		if(j + sobit1 <= k)
		{
			X[i] = j;
			if(i == n) In(n);
			else Dequy(i+1,sobit1+j);
		}
	}
}

int main()
{
	cin >> n >> k;
	Dequy(1,0);
	return 0;
}
