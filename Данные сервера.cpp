#include<iostream>

int main()
{
	setlocale(0,"rus");
    int code;//���������� ��� �������� ����������
    std::cin>> code;
    if(code==404) std::cout<<"������������� ������ �� �������."<<std::endl;
    else if(code==408) std::cout<<"����� �������� ������� �� ������� �������."<<std::endl;
    else std::cout<<code<<std::endl;
    
    return 0;
}
