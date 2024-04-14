#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
const ld epsilon = 1e-6; // Sai so

int main()
{
	int t;
	int ans;
	cin >> t;
	while(t--)
	{
		ld a, b;
		cin >> a >> b;
		for(int k = 1; k <= 40; k++)	// max: 2^40 = 10^12
		{
			// lay can bac k cua 2 can
			ld l = pow(a,1.0/k); 
			ld r = pow(b,1.0/k);
			
			// tim sai so voi can tren va can duoi c?a 2 gt l, r
			// Neu sai so nho hon epsilon, l lam tron xuong va nguoc lai r lam tron len
            ld checkleft = l - floor(l);
            ld checkright = r - ceil(r);
            if (abs(checkleft) <= epsilon)
                l = floor(l);
            else
                l = ceil(l);
            if (abs(checkright) <= epsilon)
                r = ceil(r);
            else
                r = floor(r);
            // Sau khi lam tron, neu r-l>=0 thi k thoa man L<=X^k<=R
            if (r - l >= 0)
            {
                ans = k;
            }
        }
        cout << ans << endl;
    }

    return 0;
}