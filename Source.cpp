#include<iostream>
#include<Windows.h>
using namespace std;

int ingame_balance = 0;

void Farm(int& agronomy);
void collection(int& agronomy);


int main() {
	int truffle;
	int agronomy;
	bool dd = true;
	do {
		Farm(agronomy);
		collection(agronomy);
	} while (dd == true);
	
	
	
}

void Farm(int& agronomy) {
	cout << "What you wanna take?" << endl;
	cout << "1-Wheat" << endl;
	cout << "2-Barley" << endl;
	cout << "3-Cucumbers" << endl;
	cout << "4-Oranges" << endl;
	cout << "5-Mushrooms" << endl;
	cout << "6-Tomatoes" << endl;
	cout << "7-Watermelon" << endl;
	cout << "8-Apple" << endl;
	cin >> agronomy;
}

void collection(int& agronomy) {
	switch (agronomy){
	case 1:
		Sleep(30000);
		ingame_balance += 100;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 100 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 2:
		Sleep(40000);
		ingame_balance += 150;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 150 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 3:
		Sleep(80000);
		ingame_balance += 300;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 300 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 4:
		Sleep(120000);
		ingame_balance += 400;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 400 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 5:
		Sleep(240000);
		ingame_balance += 500;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 400 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 6:
		Sleep(105000);
		ingame_balance += 350;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 350 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 7:
		Sleep(300000);
		ingame_balance += 700;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 700 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
		}


}