#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int A[n];
		for(int i = 0; i < n; i++) cin >> A[i];
		sort(A,A+n);
		int left = 0;
		int right = n/2;
		int visible = n;
		while(right < n)
		{
			if(A[right] >= 2 * A[left])
			{
				visible--;
				left++;
			}
			right++;
		}
		cout << visible << '\n';
	}
}
