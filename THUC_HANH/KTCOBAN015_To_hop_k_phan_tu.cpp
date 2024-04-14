#include<iostream>
using namespace std;
int a[11], ok;
int n, k;
void ktao(){
	for(int i = 1;i <= k;i++){
		a[i] = i;
	} 
}
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i){
		--i; 
	} 
	if(i == 0){
		ok = 0;
	}else{
		a[i]++;
		for(int j = i+1; j <= k;j++){
			a[j] = a[j-1]+1; 
		}
	} 
} 

long long to_hop() {
    long long res = 1;
    for (int i = 1; i <= k; i++, n--) {
        res = res * n / i;
    }
    return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
        cin >> n >> k;
        ok = 1;
        ktao();
        cout << to_hop() << endl;
        while(ok){
            cout<<"["; 
            for(int i = 1; i <= k; i++){
                cout << a[i];
                if(i != k){
                    cout << " "; 
                } 
            }
            cout << "]";
		    cout << endl;
		    sinh();
        } 
	
    }

}