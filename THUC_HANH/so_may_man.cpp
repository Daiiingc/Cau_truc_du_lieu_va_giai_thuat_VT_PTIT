#include <iostream>
using namespace std;

string findLuckyNumber(int n) {
    string result = "";
    // Số chữ số 7 cần thiết
    int count7 = n / 7;
    // Số dư khi chia n cho 7
    int remainder = n % 7;
    // Số chữ số 4 cần thiết
    int count4 = 0;

    // Thử thay thế chữ số 7 bằng chữ số 4 cho đến khi tổng chia hết cho 7
    while (count7 >= 0) {
        if (remainder % 4 == 0) {
            count4 = remainder / 4;
            remainder = 0;
            break;
        }
        count7--;
        remainder += 7;
    }

    // Nếu không thể tạo ra số may mắn, trả về -1
    if (remainder != 0) return "-1";

    // Tạo ra số may mắn bằng cách thêm chữ số 4 và 7
    for (int i = 0; i < count4; i++) result += '4';
    for (int i = 0; i < count7; i++) result += '7';

    return result;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << findLuckyNumber(n) << endl;
    }
    return 0;
}
