#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        string temp = s;
        reverse(temp.begin(),temp.end());
        int n = s.size();
        int ans = 0;
        int dp[n+1][n+1];
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= n; j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }else if(s[i-1]==temp[j-1]){
                    dp[i][j]= 1 + dp[i-1][j-1];
                    ans = max(ans,dp[i][j]);
                }else{
                    dp[i][j] = 0;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}