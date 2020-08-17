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
	cout << "숫자를 입력하세용: ";
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
	cout << "숫자를 입력하세용: ";
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
		cout << "제거할 인덱스가 없습니다." << '\n';
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
		cout << "제거할 인덱스가 없습니다." << '\n';
	}
	else {
		start = start->link;
	}
}

void search_i() {
	int ad;
	cout << "숫자를 입력하세용: ";
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
		cout << idx << "번째 인덱스에 있습니다."<<'\n';
	}
	else {
		cout << "그런 값 없습니다." << '\n';
	}
}
void search_idx() {
	int idx;
	cout << "인덱스를 입력하세용: ";
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
		cout << p->i << "값이 입력하신 인덱스에 있습니다." << '\n';
	}
	else {
		cout << "입력하신 인덱스가 리스트의 인덱스를 초과했습니다." << '\n';
	}


}


void del_i() {
	int ad;
	cout << "숫자를 입력하세용: ";
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
			cout << "삭제되었습니다." << '\n';
		}
	}
	else {
		cout << "그런 값 없습니다." << '\n';
	}
}

void del_idx() {
	int idx;
	cout << "인덱스를 입력하세용: ";
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
		cout << "제거되었습니다." << '\n';
	}
	else {
		cout << "입력하신 인덱스가 리스트의 인덱스를 초과했습니다." << '\n';
	}


}

void insert_idx() {
	int idx;
	cout << "인덱스를 입력하세용: ";
	cin >> idx;
	int ad;
	cout << "숫자를 입력하세용: ";
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
		cout << "입력되었습니다." << '\n';
	}
	else {
		cout << "입력하신 인덱스가 리스트의 인덱스를 초과했습니다." << '\n';
	}


}
void printMenu();
int main() {
	int t;
	printMenu();

	while (true) {
		cout << "메뉴선택 : ";
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
			cout << "프로그램이 종료됩니다." << "\n";
			break;
		}
	}




	
}

void printMenu() {
	cout << "=================================" << "\n";
	cout << "               menu              " << "\n";
	cout << "=================================" << "\n";
	cout << "1. 앞에 추가" << "\n";
	cout << "2. 뒤에 추가" << "\n";
	cout << "3. 앞 제거" << "\n";
	cout << "4. 뒤 제거" << "\n";
	cout << "5. 현재 리스트 출력" << "\n";
	cout << "6. 값 검색" << "\n";
	cout << "7. 인덱스로 검색" << "\n";
	cout << "8. 값으로 삭제" << "\n";
	cout << "9. 인덱스로 삭제" << "\n";
	cout << "10. 인덱스로 삽입" << "\n";
	cout << "=================================" << "\n";
}
