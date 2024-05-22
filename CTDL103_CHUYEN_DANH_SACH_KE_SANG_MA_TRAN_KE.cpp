#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > con9_04(vector< pair<int,int> >& v, int N) {
    vector< vector<int> > a(N, vector<int>(N, 0));
    for(int i = 0; i < N; i++) {
        a[i][v[i].first - 1] = 1;
        a[i][v[i].second - 1] = 1;
    }
    return a;
}

int main() {
   // int t;
  //  cin >> t;
    //while(t--) {
        int N;
        cin >> N;
        vector< pair<int,int> > v(N);
        for(int i = 0; i < N; i++) {
            int x, y;
            cin >> x >> y;
            v[i] = make_pair(x, y);
        }
        vector< vector<int> > a = con9_04(v, N);
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    //}
}
