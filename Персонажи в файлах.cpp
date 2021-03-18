#include<iostream>
#include<Windows.h>
#include<fstream>
#include<ostream>
#include<istream>
using namespace std;

class сharacter {
public:
	сharacter(int a, int b, string y, string x);
	~сharacter();
	int get_xp_level();
	int get_hp();
	string get_specialty();
	string get_name();

private:
	int* xp_level;
	int* hp;
	string* specialty;
	string* name;
};

сharacter::сharacter(int a = 0, int b = 0, string y = NULL,string x = NULL) {
	this->xp_level = new int(a);
	this->hp = new int(b);
	this->specialty = new string(y);
	this->name = new string(x);
}

int сharacter::get_xp_level() {
	return *xp_level;
}

int сharacter::get_hp() {
	return *hp;
}

string сharacter::get_specialty() {
	return *specialty;
}

string сharacter::get_name() {
	return *name;
}

сharacter::~сharacter() {
	delete this->xp_level;
	delete this->hp;
	delete this->specialty;
	delete this->name;
	xp_level = 0;
	hp = 0;
	specialty = 0;
	name = 0;
}

int main()
{
	string knight_name;
	string choose_name;
	int choose;
	bool menu = true;

	while (menu) {
		cout << "Main menu" << endl;
		cout << "1-Create a new character" << endl;
		cout << "2-Load exist character" << endl;
		cout << "3-exit" << endl;
		cin >> choose;

		switch (choose) {
		case 1: {
			cout << "Enter your knight's name:";
			cin >> knight_name;
			cout << "Good name,saving your character,please wait a minute." << endl;
			Sleep(3600);
			сharacter knight(1, 100, "knight", knight_name);

			ofstream file_out(knight_name + ".fenas");
			file_out << "Character name:";
			file_out << knight.get_name() << endl;

			file_out << "Experience level:";
			file_out << knight.get_xp_level() << endl;

			file_out << "Health points:";
			file_out << knight.get_hp() << endl;

			file_out << "Specialty:";
			file_out << knight.get_specialty() << endl;

			file_out.close();
			cout << "Character saved!" << endl;
			break;
		}
		case 2: {
			char buf[200];
			cout << "Enter the name of the character you want to upload:" << endl;
			cin >> choose_name;

			ifstream file_in(choose_name + ".fenas");
			file_in.getline(buf, 200, ';');
			cout << buf << endl;
			break;
		}  
		case 3: {
			cout << "See you next time,bye bye :)" << endl;
			menu = false;
			break;
		}
		default: {
			cout << "Wait,thats illegal" << endl;
			break;
		}
		}
	}
		return 0;
}
