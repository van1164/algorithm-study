#include<iostream>

using namespace std;

struct Linkedlist
{
	int i;
	Linkedlist* link;
};

void print(Linkedlist list) {
	Linkedlist* p= &list;
	while (p != nullptr)
	{
		cout << p->i << ' ';
		p = &*p->link;
	}
}

void add(int ad, Linkedlist*& end) {
	if (end->i == -1) {
		end->i = ad;
	}
	else {
		Linkedlist* list = (Linkedlist*)malloc(sizeof(Linkedlist));
		list->i = ad;
		list->link = nullptr;
		end->link = list;
		end = end->link;
	}
}

void add_first(int ad, Linkedlist*& start) {
	Linkedlist* list = (Linkedlist*)malloc(sizeof(Linkedlist));
	list->i = ad;
	list->link = start;
	start = list;
}

void del(Linkedlist*& start, Linkedlist*& end) {
	Linkedlist* p = start;
	while (p->link->link != nullptr)
	{
		p = &*p->link;
	}
	p->link = nullptr;
	end = p;

}
void del_first(Linkedlist*& start) {
	start = start->link;

}

int main() {
	Linkedlist first;
	int t;
	first.i = -1;
	first.link = nullptr;
	Linkedlist* end = &first;
	Linkedlist* start = &first;
	cout << "<뒤에추가>" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "숫자를 입력해주세용 : ";
		cin >> t;
		add(t, end);
		cout << "Linkedlist :";
		print(*(start));
		cout << endl;
		cout << endl;
	}
	cout << "<앞에 추가>" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "숫자를 입력해주세용 : ";
		cin >> t;
		add_first(t, start);
		cout << "Linkedlist :";
		print(*(start));
		cout << endl;
		cout << endl;
	}

	del_first(start);
	cout << "<앞 삭제>" << endl;
	cout << "Linkedlist :";
	print(*(start));
	cout << endl;
	cout << endl;

	del_first(start);
	cout << "<앞 삭제>" << endl;
	cout << "Linkedlist :";
	print(*(start));
	cout<<endl;
	cout << endl;

	add_first(99,start);
	cout << "<맨 앞 99 추가>" << endl;
	cout << "Linkedlist :";
	print(*(start));
	cout << endl;
	cout << endl;



	del(start,end);
	cout << "<뒤 삭제>" << endl;
	cout << "Linkedlist :";
	print(*(start));
	cout << endl;
	cout << endl;

	del(start, end);
	cout << "<뒤 삭제>" << endl;
	cout << "Linkedlist :";
	print(*(start));
	cout << endl;
	cout << endl;

	add(99,end);
	cout << "<뒤 99 추가>" << endl;
	cout << "Linkedlist :";
	print(*(start));
	cout << endl;
}