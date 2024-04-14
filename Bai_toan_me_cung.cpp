//#include <bits/stdc++.h>
//using namespace std;
//
//int a[100][100];
//int n;
//string s = "";
//
//void in()
//{
//	cout << s << " ";
//}
//
//void Try(int i, int j)
//{
//	if(i == n && j == n) in();
//	else
//	{
//		if(i + 1 <= n && a[i+1][j] == 1)
//		{
//			s+="D";
//			a[i+1][j] = 0;
//			Try(i+1,j);
//			s.pop_back();
//			a[i+1][j] = 1;
//		}
//	
//		if(j+1 <= n && a[i][j+1] == 1)
//		{
//			s+="R";
//			a[i][j+1] = 0;
//			Try(i,j+1);
//			s.pop_back();
//			a[i][j+1] = 1;
//		}
//	}
//	
//}

//int main()
//{
//	int t;
//	cin >> t;
//	while(t--)
//	{
//		cin >> n;
//		for(int i = 1; i <= n; i++)
//		{
//			for(int j = 1; j <= n; j++)
//			{
//				cin >> a[i][j];
//			}
//			
//		}
//		Try(1,1);
//		cout << endl;
//	}
//}

#include<iostream>
using namespace std;

int a[100][100],n,dem;
string s;
string h ="DRLU";

int dx[4] = {1,0,0,-1};
int dy[4] = {0,1,-1,0};

void Next(int i, int z){
    for(int j = 0; j <= 3; j++){
        if(i == n && z == n){
            cout << s << endl;
        }
         if( i+dx[j] > 0 && i+dx[j] <=n && j+dy[j]>0 && j+dy[j] <= n && a[i+dx[j]][z+dy[j]]==1){
             a[i+dx[j]][z+dy[j]]==0;
             s += h[j];
             Next(i+dx[j],z+dy[j]);
             a[i+dx[j]][z+dy[j]]==1;
             s.pop_back();
         }
    }
}





int main(void)
{
    while(1){
        cin >> n;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        dem = 0;
        s = "";
        Next(1,1);
        if(dem==0){
            cout << -1 << endl;
        }

    }

}
