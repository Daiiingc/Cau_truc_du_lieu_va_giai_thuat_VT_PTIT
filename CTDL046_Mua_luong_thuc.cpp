#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		//	N: so don vi luong thuc nhieu nhat ban co the mua trong ngay.
		//	S: so luong ngay ban can duoc su dung luong thuc de ton tai.
		//	M: so don vi luong thuc can co moi ngay de ban ton tai.
		int N, S, M;
		cin >> N >> S >> M;
		
		if(M*S > (S-S/7)*N) cout << -1; // M*S: so luong thuc duoc dung trong S ngay, (S-S/7)*N: so luong thuc duoc mua trong S-S/7 ngay
		else
		{
			for(int i = 1; i <= S-S/7; i++)
			{
				if(N*i >= M*S) // N*i: so luong thuc mua trong i ngay du de song
				{
					cout << i;
					break;
				}
			}
		}
		cout << '\n';
	}
}
