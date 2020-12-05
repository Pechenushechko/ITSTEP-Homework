#include<iostream>
#include<windows.h>

int main()
{
	setlocale(0,"rus");
	int Number;//переменная для количества аользователь форума
	std::cin>>Number;
	std::cout<<"Добро пожаловать на форум нашей игры."<<std::endl;
	Sleep(1000);
	if(Number==0||Number==5)std::cout<<"Как грустно!Похоже на форуме сейчас "<<Number<<" пользователей,хотите быть первым?"<<std::endl;
	else if(Number==1)std::cout<<"На форуме сейчас "<<Number<<" пользователь.Хотите просединится?"<<std::endl;
	else if(Number<5)std::cout<<"На форуме сейчас "<<Number<<" пользователя.Хотите присоединится?"<<std::endl;
	else if(Number<=21)std::cout<<"На форуме сейчас "<<Number<<" пользователь.Хотите присоединится?"<<std::endl;
	else std::cout<<"На форуме сейчас "<<Number<<" пользователя.Хотите присоединится?"<<std::endl;
	return 0;
	
	
}
