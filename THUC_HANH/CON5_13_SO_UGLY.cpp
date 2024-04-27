#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    // Tao mang luu cac so Ugly
    vector<int> uglyNumbers;
    uglyNumbers.push_back(1);

    // Khoi tao cac chi so de tao so Ugly tiep theo
    int i2 = 0, i3 = 0, i5 = 0;

    while (uglyNumbers.size() < 10001) {
        // Tim so Ugly tiep theo
        int nextUgly = min(uglyNumbers[i2] * 2, min(uglyNumbers[i3] * 3, uglyNumbers[i5] * 5));
        uglyNumbers.push_back(nextUgly);

        // Cap nhat chi so
        if (nextUgly == uglyNumbers[i2] * 2) ++i2;
        if (nextUgly == uglyNumbers[i3] * 3) ++i3;
        if (nextUgly == uglyNumbers[i5] * 5) ++i5;
    }

    while (T--) {
        int N;
        cin >> N;
        cout << uglyNumbers[N - 1] << endl;
    }

    return 0;
}
