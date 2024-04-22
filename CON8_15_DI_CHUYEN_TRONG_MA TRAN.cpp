#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int M, N;
int A[MAX][MAX];

int Dodaiduongdi(int M, int N)
{
	int D[MAX][MAX];
	int Qi[MAX*MAX], Qj[MAX*MAX];
	int input = 0, output = 0;
	// Khoi tao
	memset(D,0,sizeof(D));
	Qi[input] = 1;
	Qj[input++] = 1;
	// vong lap
	while(input > output && D[M][N] == 0)
	{
		int ii = Qi[output];
		int jj = Qj[output];
		
		if(jj + A[ii][jj] <= N && D[ii][jj + A[ii][jj]] == 0)
		{
			Qi[input] = ii;
			Qj[input++] = jj + A[ii][jj];
			D[ii][jj + A[ii][jj]] = D[ii][jj] + 1;
		}
		
		if(ii + A[ii][jj] <= N && D[ii + A[ii][jj]][jj] == 0)
		{
			Qi[input] = ii + A[ii][jj];
			Qj[input++] = jj;
			D[ii + A[ii][jj]][jj] = D[ii][jj] + 1;
		}
		output++;
	}
	// Ket qua
	if(D[M][N] == 0) return -1;
	return D[M][N];
}

int main()
{	
	int t; 
	cin >> t;
	while(t--)
	{
		memset(A,0,sizeof(A));
		cin >> M >> N;
		for(int i = 1; i <= M; i++)
		{
			for(int j = 1; j <= N; j++) cin >> A[i][j];
		}
		cout << Dodaiduongdi(M,N) << endl;
	}
}


