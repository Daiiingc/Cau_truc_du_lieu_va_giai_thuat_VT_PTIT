#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		string A, B;
	    cin >> A >> B;
	
	    int n = A.length();
	    int m = B.length();
	
	    int F[n+1][m+1];
	    memset(F, 0, sizeof(F));
	
	    for (int i = 1; i <= n; ++i) 
		{
	        for (int j = 1; j <= m; ++j) 
			{
	            if (A[i-1] == B[j-1]) 
				{
	                F[i][j] = F[i-1][j-1] + 1;
	            } 
				else 
				{
	                F[i][j] = max(F[i-1][j], F[i][j-1]);
	            }
	        }
	    }
	    cout << F[n][m] << endl;
	}
    return 0;
}
