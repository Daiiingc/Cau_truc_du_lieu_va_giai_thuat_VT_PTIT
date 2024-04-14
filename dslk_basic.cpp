#include <bits/stdc++.h>
using namespace std;

struct node { // bi?u di?n node
	int info; //thành ph?n thông tin c?a node
	struct node *next; //thành ph?n con tr? c?a node
}*start; // danh sách liên k?t don: *start.

class single_linked_list { //bi?u di?n l?p danh sách liên k?t don
public:
	node* create_node(int);//T?o m?t node cho danh sách liên k?t don
	void insert_begin(); //thêm node vào d?u DSLKÐ
	void insert_pos(); //thêm node t?i v? trí c? th? trên DSLKÐ
	void insert_last(); //thêm node vào cu?i DSLKÐ
	void delete_pos(); //lo?i node t?i v? trí cho tru?c trên DSLKÐ
	void sort(); //s?p x?p n?i dung các node theo th? t? tang d?n
	void search(); //tìm ki?m node trên DSLKÐ
	void update(); //s?a d?i thông tin c?a node trên DSLKÐ
	void reverse(); //d?o ngu?c danh sách liên k?t don
	void display(); //hi?n th? n?i dung DSLKÐ
	single_linked_list(){//constructor c?a l?p single linked list.
		start = NULL;//chú ý start là bi?n toàn c?c
	}
};

void single_linked_list::create_node(int value)
{
		
} 

int main()
{

}
