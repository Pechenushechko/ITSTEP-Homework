#include<iostream>
using namespace std;


int main() {
	bool check = false;
	string n_name;
	string tt[10];
	cout << "Helo,please enter some names." << endl;
	for (int i = 0; i < 10; i++) {
		cin >> tt[i];
	}
	cout << "You enter thats names:" << endl;
	for (int g = 0; g < 10; g++) {
		cout << tt[g] << ", ";
	}
	cout << endl;
	cout << "What name you wanna find?" << endl;
	cin >> n_name;
	for (int o = 0; o < 10; o++) {
		 if (n_name == tt[o]) {
			 check = true;
			 break;
		 }
		}
	if (check == true) {
		cout << "Oh i find your name!!!" << endl;
	}
	else {
		cout << "ff" << endl;
	}
	return 0;
}
