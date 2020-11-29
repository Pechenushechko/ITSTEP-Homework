#include <iostream>
#include <string>

int main()
{
	setlocale (0,"rus");
	
	std::cout <<"Здраствуй путник,как тебя звать?"<< std::endl;
	std::cout<<"Введите имя персонажа:";
	std::string name;
	std::cin>>name;
	std::cout<<"Рад встрече "<<name<<".Если хочешь заработать немного денег,то зачисти ближайщую пещеру от гоблинов."<<std::endl;
	std::cout<< "Спасибо за совет,я посмотрю что можно сделать."<<std::endl;
	
	
	return 0;
	
}

