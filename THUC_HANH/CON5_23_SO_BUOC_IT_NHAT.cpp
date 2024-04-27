#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i=0; i<N; i++) cin >> A[i];
        vector<int> dp(N, 1);
        for(int i=1; i<N; i++)
            for(int j=0; j<i; j++)
                if(A[i] >= A[j] && dp[i] < dp[j] + 1)
                    dp[i] = dp[j] + 1;
        int LIS = *max_element(dp.begin(), dp.end());
        cout << N - LIS << '\n';
    }
    return 0;
}