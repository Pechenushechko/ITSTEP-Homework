#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(0, "Rus");
	int a, exit=0;
	while (exit != 1) {
	string name;
	cout << "1-Продолжить" << endl;
	cout << "2-Новая игра" << endl;
	cout << "3-Загрузка сохранения" << endl;
	cout << "4-Настройки"<< endl;
	cout << "5-Выйти" << endl;
	cin >> a;
		switch (a) {
		case 1:
		{
			cout << "Добро пожаловать." << endl;
			break;
		}
		case 2:
		{
			cout << "Введите имя персонажа:";
			cin>>name;

			cout << "Конгратулэйшен. Вы начинаете новую игру с именем " << name << endl;
			exit = 1;
			break;
		}
		case 3:
		{
			cout << "1-Перед началом битвы с Дрыклабрусом" << endl;
			cout << "2-После победы над Дрыклабрусом" << endl;
			cout << "3-Закупка у Олдриха" << endl;
			int upload;
			cin >> upload;
			switch (upload) {
			case 1:
			{
				cout << "Вы загружаетесь перед началом битвы с Дрыклабрусом" << endl;
				break;
			}
			case 2:
			{
				cout << "Вы загружаетесь после победы над Дрыклабрусом" << endl;
				break;
			}
			case 3:
			{
				cout << "Вы загружаетесь у Олдриха" << endl;
			}
			default:
			{
				cout << "Ты что наделал?" << endl;
				break;
			}
			}
			exit = 1;
			break;
		}
		case 4:
		{
			int set;
			int graf;
			int dif;
			cout<<"1-Сложность игры"<<endl;
			cout<<"2-Графика"<<endl;
			cout<<"3-Разработчики"<<endl;
			cin>>set;
			switch (set)
			{
				case 1:
				{
					cout<<"Текущая сложность игры-высокая"<<endl;
					cout<<"1-низкая"<<endl;
					cout<<"2-средняя"<<endl;
					cout<<"3-вернутся в меню"<<endl;
					cin>>dif;
					
					if(dif==1||dif==2)
				       cout<<"Ваш уровень сложности был изменён."<<endl;
					else 
					 	cout<<"Возвращение в меню"<<endl;	
				
				break;
			}
				case 2:{
					cout<<"Текущие настройки графики-средние"<<endl;
					cout<<"1-низкие"<<endl;
					cout<<"2-высокие"<<endl;
					cout<<"3-вернутся в меню"<<endl;
					cin>>graf;
					
					if(graf==1||graf==2)
				       cout<<"Настройки графики были изменены."<<endl;
					else 
					 	cout<<"Возвращение в меню"<<endl;
				
				break;
			}
				case 3:
					cout<<"Разработчики этой программы:";
					cout<<"Vladislav и Vladimir"<<endl;
				
				break;
				default:
					cout<<"Не надо так делать."<<endl;
			}
			
			break;
		}
		break;
		case 5:
		{
			cout << "Вы уверены что хотите выйти из игры,не сохранненые данные будут потеряны?Подтвердить выход- цифра 1,любое другое число отменить выбор." << endl;
			cin >> exit;
			if (exit == 1)
				cout << "Выход из игры,пожалуйста подождите." << endl;
			else
				cout << "Возвращение в меню" << endl;
			break;
		}
		default:
		{
			cout << "Ты куда нажал? " << endl;
			break;
		}




		}
	}
}


