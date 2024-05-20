#include"bits/stdc++.h"
using namespace std;

const long long mod = 123456789;
long long dp[1000005];

void solve(){
    dp[0]=1;
    for(int i = 1; i <= 1000000;i++){
        dp[i] = (dp[i-1]*2)%mod;
    }
}

int main(){
    int t;
    cin >> t;
    solve();
    while(t--){
        int n;
        cin >> n;
        cout << dp[n-1] << endl;
    }
    return 0;
}