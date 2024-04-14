#include<bits/stdc++.h>
#define ll long long
using namespace std;

string dec_to_bin(int n){
    if(n == 0){
        return "0";
    }
    string bin;
    while(n > 0){
        bin = to_string(n % 2) + bin;
        n /= 2;
    }
    return bin;
}
int gray_code(int n){
    return n ^ (n >> 1);
}
int bin_to_dec(string bin){
    int dec = 0;
    for(int i = 0; i < bin.length(); ++i){
        dec += (bin[i] - '0') * pow(2, bin.length() - i - 1);
    }
    return dec;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int gray = gray_code(n);
        string gray_bin = dec_to_bin(gray);
        int gray_dec = bin_to_dec(gray_bin);
        cout << gray_dec << endl;
    }
    return 0;
}