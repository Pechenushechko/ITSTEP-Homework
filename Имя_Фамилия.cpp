#include <iostream>
#include <string>
int main()
{
	setlocale (0,"rus");
	std::cout <<"������� ���� ���:";
	std::string name;
	std::cin>> name;
	std::cout<<"������� ���� �������:";
	std::string last_name;
	std::cin>> last_name;
	std::cout<<"������� ��� �������:";
	std::string Years_old;
	std::cin>> Years_old;
	std::cout <<"���� ���:"<< name << std::endl;
	std::cout<<"���� �������:"<< last_name <<std::endl;
	std::cout<<"��� �������:"<< Years_old<<std::endl;
	
	
return 0;
	
	

	
}
