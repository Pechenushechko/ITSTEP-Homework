#include<iostream>
#include<ctime>
using namespace std;

int main() {
	int start_time = clock();
	bool check = false;
	string n_name;
	string tt[10];
	cout << "Helo,please enter some names." << endl;
	for (int i = 0; i < 10; i++) {
		 tt[i] = "qq";
	}
	cout << "You enter thats names:" << endl;
	for (int g = 0; g < 10; g++) {
		cout << tt[g] << ", ";
	}
	cout << endl;
	cout << "What name you wanna find?" << endl;
	 n_name = "ww";
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
	int end_time = clock();
	int result = end_time - start_time;
	cout << result << endl;
	return 0;
}	
