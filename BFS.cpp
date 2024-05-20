/*
Input:
10
0 1 1 1 0 0 0 0 0 0
1 0 0 1 1 0 0 0 0 0
1 0 0 1 0 1 0 0 0 0
1 1 1 0 1 1 0 0 1 0
0 1 0 1 0 0 0 1 0 0
0 0 1 1 0 0 1 0 0 0
0 0 0 0 0 1 0 0 1 1
0 0 0 0 1 0 0 0 1 1
0 0 0 1 0 0 1 1 0 1
0 0 0 0 0 0 1 1 1 0
3

Output:
3 1 4 6 2 5 9 7 8 10
*/


#include <bits/stdc++.h>
using namespace std;
bool check[100]; // mảng “check” để đánh dấu các đỉnh đã được duyệt
int a[100][100]; // mảng 2 chiều “a” thể hiện cho ma trận kề, a chứa các thành phần 0 và 1 với 1 thể hiện có liên kết và 0 thể hiện không liên kết
int n;
void BFS(int u){
	queue <int> q; // khởi tạo hàng đợi
	q.push(u); // đưa u vào hàng đợi
	check[u] = true; // đánh dấu u đã được duyệt
	cout <<u<< " "; // in ra u
	while(!q.empty()){ // điều kiện lặp: hàng đợi còn phần tử 
		int s = q.front(); // lưu s là phần tử đầu của hàng đợi
		q.pop(); // lấy s ra ngoài
		for(int v = 1;v<=n;v++){
			if(a[s][v] == 1 && check[v] == false){ // “if” chạy nếu đỉnh v kề đỉnh s và v chưa được duyệt
				cout << v <<" "; // in ra v
				q.push(v); // đưa v vào hàng đợi

				check[v] = true; // đánh dấu v đã được duyệt
			}
		} 
	}
}
int main(){
	cin >> n; // nhập số đỉnh của đồ thị
	// nhập ma trận kề
	for(int i =1; i<=n; i++){
		for(int j =1;j<=n;j++){
			cin >> a[i][j]; 
		}
	}
	memset(check,false,sizeof(check)); // khởi tạo giá trị của tất cả các phần tử trong mảng “check” đều là “false” 
	int u; // u là đỉnh bắt đầu
	cin >> u; // nhập u
	BFS(u); // gọi BFS
	return 0;
}
