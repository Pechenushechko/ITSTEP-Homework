#include <iostream>
using namespace std;
const int ALA_NQZ = 25000;
const int ALA_FRU = 20000;
const int NQZ_FRU = 40000;
const string username = "qwerty";


int greeting(bool& logged_in) {
	string some_username;
	cout << "Приветствуем на сайте авиакомпании 'Полный улёт'."<< endl;
	cout << "Для того чтобы авторизироваться на сайте введите свой логин или введите любой символ для того чтобы продолжить как гость." << endl;
	cout << "Внимание! Если вы продлжите пользоваться сайтом как гость,то вы не получите определённые привелегии." << endl;
	cin >> some_username;
	if (some_username == username) logged_in = true;
	else logged_in = false;
	cout << "Авиакомпания 'Полный Улет' благодарит Вас за смелость и любовь к экстриму." << endl;
		cout << "Наши направления:" << endl;
	cout << "1. Алматы - Нур-Султан, Нур-Султан - Алматы" << endl;
	cout << "2. Алматы - Бишкек, Бишкек - Алматы" << endl;
	cout << "3. Нур-Султан - Бишкек, Бишкек - Нур-Султан" << endl;
	cout << "Что выбираете?" << endl;
	int choise;
	cin >> choise;
	return choise;
}
int base_cost(int choise,int* p_cost) {
	int cost;
	switch (choise) {
	case 1:
		cout << "Стоимость Вашего билета " << ALA_NQZ << " тенге. Спасибо!" << endl;
		*p_cost = ALA_NQZ;
		break;
	case 2:
		cout << "Стоимость Вашего билета " << ALA_FRU << " тенге. Спасибо!" << endl;
		*p_cost = ALA_FRU;
		break;
	case 3:
		cout << "Стоимость Вашего билета " << NQZ_FRU << " тенге. Спасибо!" << endl;
		*p_cost = NQZ_FRU;
		break;
	default:
		break;
	}
	return *p_cost;
}
int final_cost(bool logged_in, int* p_cost) {
	if (logged_in == true) {
		int Cash_Back = *p_cost / 100 * 5;
		cout << "Ваш кешбек составил: " << Cash_Back <<"-это 5% от ценны билета"<< endl;
		cout << "Не забудьте рассказать о нас друзьям!" << endl;
	}
	return *p_cost;
}
int main() {
	setlocale(LC_ALL, "ru");
	bool logged_in = false;
	int cost;
	int* p_cost = &cost;
	char end_programm;

	while (true) {
		int choise = greeting(logged_in);
		cost = base_cost(choise,p_cost);
		cost = final_cost(logged_in, p_cost);
		cout << endl << endl;
		cout << "Прошло много времени..." << endl;
		cout << "(Нажмите 'e' для выхода из программы или любой другой символ для продолжения)" << endl;
			cout << endl << endl;
		cin >> end_programm;
		if (end_programm == 'e') break;
	}
	return 0;
}
