#include<iostream>
#include<fstream>
#include<ostream>
#include<istream>
using namespace std;

class quest {
public:
	quest(int x, string y );
	void set_stage(int z);
	int get_id();
	int get_stage();
	string get_name();
private:
	int stage;
	int id;
	string name;

};

quest::quest(int x, string y ) {
	id = x;
	name = y;
}

int quest::get_id() {
	return this->id;
}

string quest::get_name() {
	return this->name;
}

void quest::set_stage(int z) {
	stage = z;
}

int quest::get_stage() {
	return this->stage;
}

int main() {

	quest Jambuk(1, "Journey to the Japanese garden");
	Jambuk.set_stage(0);
	cout << Jambuk.get_id() << endl;

	ofstream file_out("C:\\мусор\\Journey to the Japanese garden.fenas");
	file_out << Jambuk.get_id()<<endl;
	file_out << Jambuk.get_stage() << endl;
	file_out.close();

	char buf[50];
	ifstream file_in("C:\\мусор\\Journey to the Japanese garden.fenas");
	file_in.getline(buf, 50, ';');
	cout << buf << endl;

		/*ofstream file_out("KunG.juja");
		file_out << "Hello world!" << endl;
		file_out.close();

		char buffer[50];
		ifstream file_in("KunG.juja");
		file_in.getline(buffer,50,';');
		cout << buffer << endl;*/
}
