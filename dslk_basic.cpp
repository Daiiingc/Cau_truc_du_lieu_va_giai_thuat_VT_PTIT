#include <bits/stdc++.h>
using namespace std;

struct node { // bi?u di?n node
	int info; //th�nh ph?n th�ng tin c?a node
	struct node *next; //th�nh ph?n con tr? c?a node
}*start; // danh s�ch li�n k?t don: *start.

class single_linked_list { //bi?u di?n l?p danh s�ch li�n k?t don
public:
	node* create_node(int);//T?o m?t node cho danh s�ch li�n k?t don
	void insert_begin(); //th�m node v�o d?u DSLK�
	void insert_pos(); //th�m node t?i v? tr� c? th? tr�n DSLK�
	void insert_last(); //th�m node v�o cu?i DSLK�
	void delete_pos(); //lo?i node t?i v? tr� cho tru?c tr�n DSLK�
	void sort(); //s?p x?p n?i dung c�c node theo th? t? tang d?n
	void search(); //t�m ki?m node tr�n DSLK�
	void update(); //s?a d?i th�ng tin c?a node tr�n DSLK�
	void reverse(); //d?o ngu?c danh s�ch li�n k?t don
	void display(); //hi?n th? n?i dung DSLK�
	single_linked_list(){//constructor c?a l?p single linked list.
		start = NULL;//ch� � start l� bi?n to�n c?c
	}
};

void single_linked_list::create_node(int value)
{
		
} 

int main()
{

}
