#include <iostream>
#include <set>
using namespace std;

class User{
public:
	User(int a, string b);
	User();
	void print() {
		cout << age ;
		cout << name << endl;
	}
	bool operator<(const User& rv) const {
		return this->name < rv.name;
	}
private:
	int age;
	string name;
};

User::User(int a,string b)
{
	age = a;
	name = b;
}

int main()
{
	//множество ключей
	set<string> names;
	names.insert("John");
	names.insert("Ben");
	names.insert("Bob");
	names.insert("Mark");
	names.insert("Jeni");
	names.insert("Anna");
	names.insert("Alex");
	names.insert("Artur");

	for (auto item : names)
	{
		cout << item << endl;
	}

	cout << "--------------------------------" << endl;

	set<User> users;
	users.insert(User(15, "Ruslan"));
	users.insert(User(16, "Artur"));
	users.insert(User(25, "Mary"));

	for (auto item : users) {
		item.print();
	}
}
