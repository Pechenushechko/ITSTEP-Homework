#include <iostream>
#include <windows.h>

int main()
{
	setlocale(0,"rus");
	int age;//���������� ��������
	std::cout<<"�����������,�� ������ �� ���� ����������� ����� ����� ����,������� �� �� ��� ������ ���� ����!"<<std::endl;
	Sleep(2000);
	std::cout<<"��� �������������  ����������� ���������� ������� ��� ��������� �������:";
	std::cin>>age;
	if(age<10 ) std::cout<<"���������� ���������,�� �� ������� ������ � �� �� ����� ������������ ��� ������ � ����������� ����.�� ���������������,�� ������� �������� � ���� ���� ����� ��� ����������� 10 ���."<<std::endl;
	else if (age>100)std::cout<<"� ���� �� � ��� ������ �����������.���������� ������� ��� ��������� �������. "<<std::endl;
	else std::cout<<"������� �� ���� ���������,�� ������ �������������� �� ����� ����."<<std::endl;
	return 0;
}
