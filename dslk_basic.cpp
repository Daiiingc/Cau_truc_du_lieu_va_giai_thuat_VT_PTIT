#include <bits/stdc++.h>
using namespace std;

struct node { // bieu dien node
	int info; //thanh phan thong tin cua node
	struct node *next; //thanh phan con tro cua node
}*start; // danh sach lien ket don: *start.

class single_linked_list { //bieu dien lop danh sach lien ket don
public:
	node* create_node(int);//Tao mot node cho danh sach lien ket don
	void insert_begin(); //them mot node trong danh sach lien ket don
	void insert_pos(); //them node tai vi tri cu the trong DSLK don
	void insert_last(); //them node vao cuoi DSLK don
	void delete_pos(); //loai node tai vi tri cho truoc trong DSLK don
	void sort(); //sap xep noi dung cac node theo thu tu tang dan
	void search(); //tim kiem node trong DSLK don
	void update(); //sua doi thong tin cua node trong DSLK don
	void reverse(); //dao nguoc danh sach lien ket don
	void display(); //hien thi noi dung DSLK don
	single_linked_list(){//constructor cua lop single linked list.
		start = NULL;//chu y start la bien toan cuc
	}
};

node *single_linked_list::create_node(int value){
	struct node *temp; //khai báo hai con trỏ node *temp
	temp = new(struct node); //cấp phát miền nhớ cho temp
	if (temp == NULL){ //nếu không đủ không gian nhớ
		cout<<"không đủ bộ nhớ để cấp phát"<<endl;
		return 0;
	}
	else {
		temp->info = value;//thiết lập thông tin cho node temp
		temp->next = NULL; //thiết lập liên kết cho node temp
		return temp;//trả lại node temp đã được thiết lập
	}
}

void single_linked_list::insert_begin(){ //thêm node vào đầu
	int value; //giá trị node cần thêm
	cout<<"Nhap gia tri node:"; cin>>value;
	struct node *temp, *p;
	temp = create_node(value);//tạo node rời rạc có giá trị value
	if (start == NULL){//nếu danh sách liên kết đơn rỗng
		start = temp;//start chính là temp;
		start->next = NULL; //thiết lập thành phần liên kết cho start
	}
	else { //trường hợp danh sách liên kết không rỗng
		p = start; //con trỏ p trỏ đến start
		start = temp;//start trỏ đến temp
		start->next = p;//thiết lập lại liên kết cho start
	}
	cout<<"Hoan thanh them node vao dau"<<endl;
	cout << start->info << endl;
	cout << start->next << endl;
}

int main()
{
	single_linked_list X;//X là đối tượng DSLKĐ
	start = NULL; //khởi tạo start
	cout<<" Thêm node vào đầu danh sách: "<<endl;
	X.insert_begin();cout<<endl;
}
