#include<iostream>

using namespace std;

struct Linkedlist
{
	int i;
	Linkedlist* link;
};
Linkedlist* start;
Linkedlist* endi = start;


void print() {
	Linkedlist* p= start;
	while (p != nullptr)
	{
		cout << p->i << ' ';
		p = &*p->link;
	}
	cout << '\n';
}

void add() {
	int ad;
	cout << "���ڸ� �Է��ϼ���: ";
	cin >> ad;
	if (start == nullptr) {
		Linkedlist* list = (Linkedlist*)malloc(sizeof(Linkedlist));
		list->i = ad;
		list->link = nullptr;
		start = list;
		endi = list;
	}
	else {
		Linkedlist* list = (Linkedlist*)malloc(sizeof(Linkedlist));
		list->i = ad;
		list->link = nullptr;
		endi->link = list;
		endi = list;
	}
}

void add_first() {
	int ad;
	cout << "���ڸ� �Է��ϼ���: ";
	cin >> ad;
	if (start == nullptr) {
		Linkedlist* list = (Linkedlist*)malloc(sizeof(Linkedlist));
		list->i = ad;
		list->link = nullptr;
		start = list;
		endi = list;
	}
	else {
		Linkedlist* list = (Linkedlist*)malloc(sizeof(Linkedlist));
		list->i = ad;
		list->link = start;
		start = list;
	}
}

void del() {
	if (endi == nullptr) {
		cout << "������ �ε����� �����ϴ�." << '\n';
	}
	else {
		Linkedlist* p = start;
		while (p->link->link != nullptr)
		{
			p = &*p->link;
		}
		p->link = nullptr;
		endi = p;
	}
}
void del_first() {
	if (endi == nullptr) {
		cout << "������ �ε����� �����ϴ�." << '\n';
	}
	else {
		start = start->link;
	}
}

void search_i() {
	int ad;
	cout << "���ڸ� �Է��ϼ���: ";
	cin >> ad;
	int idx=0;
	bool ok = false;
	Linkedlist* p = start;
	while (p != nullptr)
	{
		if (p->i == ad) {
			ok = true;
			break;
		}
		p = &*p->link;
		idx++;
	}
	if (ok == true) {
		cout << idx << "��° �ε����� �ֽ��ϴ�."<<'\n';
	}
	else {
		cout << "�׷� �� �����ϴ�." << '\n';
	}
}
void search_idx() {
	int idx;
	cout << "�ε����� �Է��ϼ���: ";
	cin >> idx;
	bool ok = false;
	int i = 0;
	Linkedlist* p = start;
	while (p->link != nullptr)
	{
		if (idx==i) {
			ok = true;
			break;
		}
		p = &*p->link;
		i++;
	}
	if (ok == true) {
		cout << p->i << "���� �Է��Ͻ� �ε����� �ֽ��ϴ�." << '\n';
	}
	else {
		cout << "�Է��Ͻ� �ε����� ����Ʈ�� �ε����� �ʰ��߽��ϴ�." << '\n';
	}


}


void del_i() {
	int ad;
	cout << "���ڸ� �Է��ϼ���: ";
	cin >> ad;
	bool ok = false;
	Linkedlist* p = start;
	while (p!= nullptr)
	{
		if (ad == p->i) {
			ok = true;
			break;
		}
		p = &*p->link;
	}

	if (ok == true) {
		if (p== start) {
			start = start->link;
		}
		else {
			Linkedlist* x = start;
			while (x->link != p)
			{
				x = &*x->link;
			}
			x->link = p->link;
			cout << "�����Ǿ����ϴ�." << '\n';
		}
	}
	else {
		cout << "�׷� �� �����ϴ�." << '\n';
	}
}

void del_idx() {
	int idx;
	cout << "�ε����� �Է��ϼ���: ";
	cin >> idx;
	bool ok = false;
	int i = 0;
	Linkedlist* p = start;
	while (p != nullptr)
	{
		if (idx == 0) {
			ok =true;
			break;
		}
		if (idx-1 == i) {
			if (p->link == nullptr) {
				break;
			}
			else {
				ok = true;
				break;
			}
		}
		p = &*p->link;
		i++;
	}
	if (ok == true) {
		if (idx == 0) {
			start = p->link;
		}
		else if (p->link->link == nullptr) {
			p = nullptr;
		}
		else {
			p->link = p->link->link;
		}
		cout << "���ŵǾ����ϴ�." << '\n';
	}
	else {
		cout << "�Է��Ͻ� �ε����� ����Ʈ�� �ε����� �ʰ��߽��ϴ�." << '\n';
	}


}

void insert_idx() {
	int idx;
	cout << "�ε����� �Է��ϼ���: ";
	cin >> idx;
	int ad;
	cout << "���ڸ� �Է��ϼ���: ";
	cin >> ad;
	bool ok = false;
	int i = 0;
	Linkedlist* p = start;
	while (p->link!= nullptr)
	{
		if (idx-1 == i) {
			ok = true;
			break;
		}
		p = &*p->link;
		i++;
	}
	if (ok == true) {
		Linkedlist* list = (Linkedlist*)malloc(sizeof(Linkedlist));
		list->i = ad;
		list->link = p->link;
		p->link = list;
		cout << "�ԷµǾ����ϴ�." << '\n';
	}
	else {
		cout << "�Է��Ͻ� �ε����� ����Ʈ�� �ε����� �ʰ��߽��ϴ�." << '\n';
	}


}
void printMenu();
int main() {
	int t;
	printMenu();

	while (true) {
		cout << "�޴����� : ";
		cin >> t;

		if (t == 1) {
			add_first();
		}
		else if (t == 2) {
			add();
		}
		else if (t == 3) {
			del_first();
		}
		else if (t == 4) {
			del();
		}
		else if (t == 5) {
			print();
		}
		else if (t == 6) {
			search_i();
		}
		else if (t == 7) {
			search_idx();
		}
		else if (t == 8) {
			del_i();
		}
		else if (t == 9) {
			del_idx();
		}
		else if (t == 10) {
			insert_idx();
		}
		else {
			cout << "���α׷��� ����˴ϴ�." << "\n";
			break;
		}
	}




	
}

void printMenu() {
	cout << "=================================" << "\n";
	cout << "               menu              " << "\n";
	cout << "=================================" << "\n";
	cout << "1. �տ� �߰�" << "\n";
	cout << "2. �ڿ� �߰�" << "\n";
	cout << "3. �� ����" << "\n";
	cout << "4. �� ����" << "\n";
	cout << "5. ���� ����Ʈ ���" << "\n";
	cout << "6. �� �˻�" << "\n";
	cout << "7. �ε����� �˻�" << "\n";
	cout << "8. ������ ����" << "\n";
	cout << "9. �ε����� ����" << "\n";
	cout << "10. �ε����� ����" << "\n";
	cout << "=================================" << "\n";
}
