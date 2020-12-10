#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(0,"rus");
	bool trigger=true;
	int pa;
	string name;
	
	while (trigger) {
		cout<<"Добро пожаловать."<<endl;
		cout<<"1-Продолжить игру"<<endl;
		cout<<"2-Начать новую игру"<<endl;
		cout<<"3-Загрузить сохранение"<<endl;
		cout<<"4-Выйти из игры"<<endl;
		cin>>pa;
		
		switch(pa){
		
			case 1:
				trigger=true;
				break;
			case 2:
				cout<<"Введите имя нового персонажа:";
				cin>>name;
				trigger=false;
				break;
			case 3:
				cout<<"Ваши персонажи:"<<endl;
				cout<<"Potat.Расса-гном.Класс-Воин.Уровень персонажа-12."<<endl;
				cout<<"Zip.Расса-эльф.Класс-Маг.Уровень персонажа-30."<<endl;
				cout<<"Vor.Расса-человек.Класс-Палладин.Уровень персонажа-80."<<endl;
				trigger=false;
				break;
			case 4:
				trigger=false;
				break;
			default:
				cout<<"Ваша магия слишком сильна,соблюдайте пожалуйста наши правила :)"<<endl;
				
				
	}
	}
	return 0;
}
