#include <iostream>
using namespace std;

void fr_group(string& rg_name, string& students, string& students2){}

int main() {
	string students[]{ "Jamaica","Hamud","Bibi" };
	string students2[]{ "Jija","Chacha","Mimi" };
	string rg_name;
	cin >> rg_name;
	
}

void fr_group(string& rg_name, string& students, string& students2){
	for (int i = 0; i < 5; i++) {
		if (students[i] == rg_name) {
			cout << "First group" << endl;
		}
		else if (students2[i] == rg_name) {
			cout << "second group" << endl;
		}
	}
}

void cheker(string& rg_name, string& students, string& students2) {
	for (int g = 0; g < 5; g++) {
		if (rg_name != students[g] && rg_name == students2[g]) {
			cout<<"No way "
		}
	}
}
