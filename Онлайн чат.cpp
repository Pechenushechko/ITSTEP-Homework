#include <iostream>
using namespace std;


const int MAX_USERS = 10; //максимально допустимое количество пользователей в чате
void add_user(int& user_counter);
void delete_user(int& user_counter);

int main() {
	int user_counter = 0; //текущее количество пользователей в чате
	bool again = true;
	while (again) {
		int switch_answ;
		cout << "Users counter: " << user_counter << endl;
		cout << "Please, choose the option: " << endl;
		cout << "1. Add user" << endl;
		cout << "2. Delete user" << endl;
		cout << "3. Exit" << endl;
		cin >> switch_answ;
		switch (switch_answ) {
		case 1:
			add_user(user_counter);
			break;
		case 2:
			delete_user(user_counter);
			break;
		case 3:
			again = false;
			break;
		default:
			cout << "Please use the available functions. " << endl;
			break;
		}
	}
}

void add_user(int& user_counter) {
	if (user_counter == MAX_USERS) {
		cout << "The user limit has been reached, you cannot add a new user." << endl;
	}
	else {
		user_counter ++;
		cout << "You have successfully added a new user." << endl;
	}
}

void delete_user(int& user_counter) {
	if (user_counter == 0) {
		cout << "The number of users has reached the minimum limit, you cannot perform this action." << endl;
	}
	else {
		user_counter --;
		cout << "You have successfully deleted the user." << endl;
	}
}
