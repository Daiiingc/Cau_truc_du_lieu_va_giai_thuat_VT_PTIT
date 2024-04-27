#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) 
		{
            cin >> A[i];
        }

        vector<int> dp(N, 0);
        int maxSum = A[0];

        for (int i = 0; i < N; ++i) 
		{
            dp[i] = A[i];
            for (int j = 0; j < i; ++j) 
			{
                if (A[j] < A[i]) 
				{
                    dp[i] = max(dp[i], dp[j] + A[i]);
                }
            }
            maxSum = max(maxSum, dp[i]);
        }
        cout << maxSum << endl;
    }
    return 0;
}
