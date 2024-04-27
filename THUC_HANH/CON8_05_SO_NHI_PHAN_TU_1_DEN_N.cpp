#include <bits/stdc++.h>
using namespace std;

void printBinary(int n) {
    for (int i = 1; i <= n; i++) {
        bitset<32> binary(i);
        string binaryStr = binary.to_string();
        size_t found = binaryStr.find_first_not_of('0');
        if (found != string::npos) binaryStr = binaryStr.substr(found);
        cout << binaryStr << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        printBinary(n);
    }
    return 0;
}