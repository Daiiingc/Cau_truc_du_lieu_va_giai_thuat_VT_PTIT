#include<bits/stdc++.h>
using namespace std;

int maxSumBS(int A[], int N) {
    int inc[N], dec[N];

    for (int i = 0; i < N; i++)
        inc[i] = dec[i] = A[i];

    for (int i = 1; i < N; i++)
        for (int j = 0; j < i; j++)
            if (A[i] > A[j] && inc[i] < inc[j] + A[i])
                inc[i] = inc[j] + A[i];

    for (int i = N-2; i >= 0; i--)
        for (int j = N-1; j > i; j--)
            if (A[i] > A[j] && dec[i] < dec[j] + A[i])
                dec[i] = dec[j] + A[i];

    int max = inc[0] + dec[0] - A[0];
    for (int i = 1; i < N; i++)
        if (inc[i] + dec[i] - A[i] > max)
            max = inc[i] + dec[i] - A[i];

    return max;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        int A[N];
        for(int i=0; i<N; i++)
            cin >> A[i];
        cout << maxSumBS(A, N) << '\n';
    }
    return 0;
}