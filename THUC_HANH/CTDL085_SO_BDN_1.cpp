#include <iostream>
using namespace std;

// Hàm kiểm tra số BDN
bool is_BDN(long long number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 0 && digit != 1) {
            return false;
        }
        number /= 10;
    }
    return true;
}

// Hàm đếm số lượng số BDN nhỏ hơn N
long long count_BDN(long long N) {
    long long count = 0;
    for (long long i = 1; i < N; ++i) {
        if (is_BDN(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        long long N;
        cin >> N;
        long long result = count_BDN(N);
        cout << result << endl;
    }

    return 0;
}