#include<bits/stdc++.h>
using namespace std;
vector<int>dsc[1005];
int main(){
    int t;
    cin >> t;
    while(t--){
        int v,e;
        cin >> v >> e;
        int x,y;
        while(cin >> x >> y){
            dsc[x].push_back(y);
            dsc[y].push_back(x);
        }
        for(int i = 1; i <= v; i++){
            cout << "D" << i << ": ";
            for(int j = 0; j < dsc[i].size(); j++){
                cout << dsc[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}