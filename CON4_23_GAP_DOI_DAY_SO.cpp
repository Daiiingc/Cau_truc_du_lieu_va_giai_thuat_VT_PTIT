#include <bits/stdc++.h>
using namespace std;

// Function to find the K-th number in the sequence after N steps
long long findKthNumber(long long N, long long K) {
    // Base case
    if (N == 1) return 1;

    // Calculate the midpoint of the current sequence
    long long length = (1LL << N) - 1; // 2^N - 1
    long long mid = length / 2 + 1;

    if (K == mid) {
        // The middle element is the smallest number not present in the previous sequence
        return N;
    } else if (K < mid) {
        // Recurse on the first half of the sequence
        return findKthNumber(N - 1, K);
    } else {
        // Recurse on the second half of the sequence
        return findKthNumber(N - 1, K - mid);
    }
}

int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		long long n, k;
		cin >> n >> k;
		cout << findKthNumber(n,k) << '\n';
	}
}
