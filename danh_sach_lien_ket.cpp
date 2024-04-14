// danh sách liên kết đơn
// trong dslk có các node
// mỗi node chứa 1 data và địa chỉ của node tiếp theo
// lưu ý node cuối cùng thì chứa data và 1 null, node đầu là node head
// dạng bài tập: thêm, xoá ở các node trong dslk

#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* Tao_Node(int new_data)
{
	Node* p = new Node();
	p->data = new_data;
	p->next = NULL;
	return p;
}

int Dem_Node(Node* head)
{
	int dem = 0;
	while(head != NULL)
	{
		dem++;
		head = head.next;
	}
	return dem;
}

int main()
{
	Node* p = NULL;
	p = Tao_Node(2);
	cout << p->data;
	
}

//bài 1 stack/queue
//bài 2 graph
//bài 3 tree
//2 bài còn lại là bài giải thuật(tham lam, chia để trị, sinh, quay lui)
