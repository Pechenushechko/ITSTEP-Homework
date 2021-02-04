#include <iostream>

using namespace std;

void functional(const int& complete_tasks, const int& bad_mistake, const int& superlonely);
void INT_Facts();

void Welcome_menu(int& exit,bool& work, const int& complete_tasks, const int& bad_mistake, const int& superlonely) {
	cout << "Welcome to 'Enter name'" << endl;
	cout << "Would you enter?" << endl;
	cout << "1-Yes" << endl;
	cout << "2-No" << endl;
	cin >> exit;
	if (exit == 2) {
		cout << "Dont forget to do your homework! Bye bye." << endl;
		work = false;
	}
	else {
		bool entertaiment = true;
		while (entertaiment) {
			cout << "Our menu:" << endl;
			functional(complete_tasks, bad_mistake, superlonely);
		}
	}
}

void functional(const int& complete_tasks, const int& bad_mistake, const int& superlonely) {
	int menu = 0;
	cout << "1-Learn interesting facts." << endl;
	cout << "2-Your stats." << endl;
	cin >> menu;
	switch (menu) {
		case 1:
			INT_Facts();
			break;
		case 2:
			cout << "Days have passed since the last entrance: " << superlonely << endl;
			cout << "Number of completed tasks:" << complete_tasks << endl;
			cout << "Mistakes: " << bad_mistake << endl;
			if (superlonely > 10 && bad_mistake > 10) {
				cout << "You upset me,why you treat studying like that" << endl;
			}
			else if (superlonely <= 5 && bad_mistake <= 5) {
				cout << "You are making progress, keep up the good work and you will definitely succeed" << endl;
			}
			break;
	}
}

void INT_Facts() {
	int facts;
	cout << "1-Water" << endl;
	cout << "2-Sound speed" << endl;
	cout << "3-Lightning temperature" << endl;
	cout << "4-Snow" << endl;
	cout << "5-Magnet" << endl;
	cin >> facts;
	switch (facts) {
	case 1:
		cout << "As you know from textbooks, water has no form, but water still has its own form. This is a ball." << endl;
		break;
	case 2:
		cout << "The common shepherd's whip is considered the first device to break the sound barrier." << endl;
		break;
	case 3:
		cout << "The temperature on the surface of the Sun is 5 times lower than the temperature of lightning.The effective surface temperature of the Sun is 5780 Kelvin." << endl;
		break;
	case 4:
		cout << "There are no two snowflakes with the same pattern." << endl;
		break;
	case 5:
		cout << "The magnet will not work on stainless steel because there are no different proportions of nickel in it to interfere with the iron atoms." << endl;
		break;
	}
}

int main() {
	bool work = true;
	int exit = 0;
	int lonely = 5;
	int mistakes = 0;
	int tasks = 10;
	int recompleted_tasks = 0;
	const int& complete_tasks = tasks;
	const int& superlonely = lonely;
	const int& bad_mistake = mistakes; 
	const int& good_job = recompleted_tasks;
	Welcome_menu(exit,work,complete_tasks,bad_mistake,superlonely);
}
