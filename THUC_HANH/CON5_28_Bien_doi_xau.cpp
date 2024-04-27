#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;
const int mx = 105;
ll f[mx][mx];
string a, b;

void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

ll dp(){
    int n = a.size(), m = b.size();
    memset(f, 0, sizeof(f));
    for(int i = 0; i < mx; i ++) f[0][i] = i;
    for(int i = 0; i < mx; i ++) f[i][0] = i;
    for(int i = 1; i < mx; i ++){
        for(int j = 1; j < mx; j ++){
            if(a[i - 1] == b[j - 1])
                f[i][j] = f[i - 1][j - 1];
            else
                f[i][j] = min(min(f[i - 1][j], f[i][j - 1]), f[i - 1][j - 1]) + 1;
        }
    }
    return f[n][m];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        cin >> a >> b;
        cout << dp() << endl;
    }
    return 0;
}