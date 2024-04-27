#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long

ll sumSubstrings(string numStr) {
    ll total = 0;
    ll factor = 1;
    for(int i=numStr.size()-1; i>=0; i--) {
        total = (total + (numStr[i]-'0')*factor*(i+1)) % MOD;
        factor = (factor*10+1) % MOD;
    }
    return total;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        string N;
        cin >> N;
        cout << sumSubstrings(N) << '\n';
    }
    return 0;
}