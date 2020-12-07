#include<iostream>

int main()
{
	setlocale(0,"rus");
    int code;//переменная для вводимой информации
    std::cin>> code;
    if(code==404) std::cout<<"Запрашиваемые данные не найдены."<<std::endl;
    else if(code==408) std::cout<<"Время ожидания отклика от сервера истекло."<<std::endl;
    else std::cout<<code<<std::endl;
    
    return 0;
}
