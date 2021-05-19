#include <iostream>
using namespace std;

//по идеи это должно как-то очень хорошо вместе работать,но оно пока не доделано :(

class user {
public:
	void mark();
private:
	int id_dep;
	int id;
	string last_name;
	int report[100];
	int current_task;
};

class manager {
public:
	void create_task();
	void edit_task();
	manager(string name1, int id1, int id_dep1);
private:
	string name;
	int id;
	int id_dep;
};
task::task(string text1, string dedline1) {
	text = text1;
	dedline = dedline1;
}

void manager::create_task() {
	string name;
	string dedline1;
	cout << "Введите название задания" << endl;
	cin >> name;
	cout << "Введите сроки" << endl;
	cin >> dedline1;
	task New_task(string name, string dedline1);
}

class admin :public manager
{
public:
	void hello();
};

class task {
public:
	void set_task();
	int get_task();
	string text;
	string dedline;
	task(string text1, string dedline1);
};


int main() {
	cout << "Введите имя менеджера" << endl;
	string name;
	int id_dep;
	cin >> name;
	cout << "Введите департамент 1-Уборщики 2-Больничный" << endl;
	cin >> id_dep;
	int id = 1;
	manager Danil(name, id, id_dep);
}
