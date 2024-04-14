#include <bits/stdc++.h>
using namespace std;
# define MAX 16

int n;
int C[MAX][MAX];
bool cden[MAX];
int X[MAX];
int min_cost = INT_MAX;

void Tim_Duong_Di_Ngan_Nhat(int k, int tongddi)
{
	for(int i = 2; i <= n; i++)
	{
		if(cden[i] && C[X[k-1]][i] > 0 && tongddi)
		//if(cden[i] && C[X[k-1]][i] > 0 && tongddi + C[X[k-1]][i] < min_cost) // sử dụng thêm nhánh cận để không đi lại các trường hợp trước
		{
			X[k] = i;
			cden[i] = false;
			if(k == n)
			{
				if(tongddi + C[X[k-1]][i] + C[i][1] < min_cost) min_cost = tongddi + C[X[k-1]][i] + C[i][1];
			}
			else
			{
				Tim_Duong_Di_Ngan_Nhat(k+1,tongddi+C[X[k-1]][i]);
			}
			cden[i] = true;
		}
	}
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++) cin >> C[i][j];
	}
	memset(cden, true, sizeof(cden));
	X[1] = 1;
	cden[1] = false; 
	Tim_Duong_Di_Ngan_Nhat(2,0);
	cout << min_cost << endl;
	return 0;
}
