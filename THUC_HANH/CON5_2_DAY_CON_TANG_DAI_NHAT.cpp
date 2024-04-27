#include<bits/stdc++.h>
using namespace std;

int longestIncreasingSubsequence(int A[], int N) {
    int dp[N];
    for(int i=0; i<N; i++)
        dp[i] = 1;
    for(int i=1; i<N; i++)
        for(int j=0; j<i; j++)
            if(A[i] > A[j] && dp[j] + 1 > dp[i])
                dp[i] = dp[j] + 1;
    return *max_element(dp, dp+N);
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        int A[N];
        for(int i=0; i<N; i++)
            cin >> A[i];
        cout << longestIncreasingSubsequence(A, N) << '\n';
    }
    return 0;
}