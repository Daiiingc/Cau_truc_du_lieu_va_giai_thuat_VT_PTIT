#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

typedef vector<vector<long long>> Matrix;

Matrix multiply(Matrix& A, Matrix& B) {
    int N = A.size();
    Matrix C(N, vector<long long>(N, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += (A[i][k] * B[k][j]) % MOD;
                C[i][j] %= MOD;
            }
        }
    }

    return C;
}

Matrix matrixPower(Matrix& A, int K) {
    int N = A.size();
    Matrix X(N, vector<long long>(N, 0));

    for (int i = 0; i < N; i++) {
        X[i][i] = 1;
    }

    while (K > 0) {
        if (K & 1) {
            X = multiply(X, A);
        }
        A = multiply(A, A);
        K >>= 1;
    }

    return X;
}

long long Tinh_tong_tren_duong_cheo_phu(Matrix& A) {
    int N = A.size();
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i][N-i-1];
        sum %= MOD;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        Matrix A(N, vector<long long>(N, 0));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> A[i][j];
            }
        }

        Matrix X = matrixPower(A, K);
        long long sum = Tinh_tong_tren_duong_cheo_phu(X);

        cout << sum << endl;
    }
    return 0;
}