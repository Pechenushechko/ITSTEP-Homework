#include <iostream>
#include <string>

int main()
{
	setlocale (0,"rus");
	
	std::cout <<"��������� ������,��� ���� �����?"<< std::endl;
	std::cout<<"������� ��� ���������:";
	std::string name;
	std::cin>>name;
	std::cout<<"��� ������� "<<name<<".���� ������ ���������� ������� �����,�� ������� ��������� ������ �� ��������."<<std::endl;
	std::cout<< "������� �� �����,� �������� ��� ����� �������."<<std::endl;
	
	
	return 0;
	
}

