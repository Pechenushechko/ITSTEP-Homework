#include<iostream>
using namespace std;


int main() {
	string tt[10];
	cout << "Helo,please enter some names." << endl;
	for (int i = 0; i < 10; i++) {
		cin >> tt[i];
	}
	cout << "You enter thats names:" << endl;
	for (int g = 0; g < 10; g++) {
		cout << tt[g] << ",";
		cout << endl;

	}
}
