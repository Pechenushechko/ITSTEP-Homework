#include <iostream>
#include <string>
int main()
{
	setlocale (0,"rus");
	std::cout <<"Введите ваше имя:";
	std::string name;
	std::cin>> name;
	std::cout<<"Введите свою фамилию:";
	std::string last_name;
	std::cin>> last_name;
	std::cout<<"Введите ваш возраст:";
	std::string Years_old;
	std::cin>> Years_old;
	std::cout <<"Ваше имя:"<< name << std::endl;
	std::cout<<"Ваша фамилия:"<< last_name <<std::endl;
	std::cout<<"Ваш возраст:"<< Years_old<<std::endl;
	
	
return 0;
	
	

	
}
