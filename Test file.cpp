#include <iostream>
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
	void information();
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

void сharacter::information() {
	cout<< *xp_level <<endl;
	cout<< *hp <<endl;
	cout<< *specialty <<endl;
	cout<< *name <<endl;
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
	string wizard_name;
	string knight_name;
	string choose_name;
	int specialty;
	int choose = 0;

    
	

	cout << "Hello Player!" << endl;
	cout << "1-Create a new character" << endl;
	cout << "2-Load exist character" << endl;
	cin >> choose;

	if (choose == 1) {
		cout << "What character do you want to create?"<<endl;
		cout << "1-Knight" << endl;
		cout << "2-Mage" << endl;
		cin >> specialty;

		switch (specialty) {
		case 1: {
			cout << "Enter your knight's name:";
			cin >> knight_name;
			сharacter knight(1, 100, "knight", knight_name);

			ofstream file_out(knight_name +".fenas");
			file_out << "Experience level:";
			file_out << knight.get_xp_level() << endl;

			file_out << "Health points:";
			file_out << knight.get_hp() << endl;

			file_out << "Specialty:";
			file_out << knight.get_specialty() << endl;

			file_out << "Character name:";
			file_out << knight.get_name() << endl;

			file_out.close();
			break;
		}
			case 2:{
				cout << "Enter your wizard's name:";
				cin >> wizard_name;
				сharacter wizard(1, 100, "wizard", wizard_name);

				ofstream file_out(wizard_name + ".fenas");
				file_out << "Experience level:";
				file_out << wizard.get_xp_level() << endl;

				file_out << "Health points:";
				file_out << wizard.get_hp() << endl;

				file_out << "Specialty:";
				file_out << wizard.get_specialty() << endl;

				file_out << "Character name:";
				file_out << wizard.get_name() << endl;

				file_out.close();
			break;
		}
		}
	}
	else if(choose == 2){
		char buf[100];
		cout << "Enter the name of the character you want to upload:" << endl;
		cin >> choose_name;

		if (choose_name == knight_name) {
			ifstream file_in(choose_name + ".fenas");
			file_in.getline(buf, 100, ';');
			cout << buf << endl;
		}
		else if (choose_name == wizard_name) {
			ifstream file_in(choose_name + ".fenas");
			file_in.getline(buf, 100, ';');
			cout << buf << endl;
		}
	}

	return 0;
}
