#include<iostream>
#include<windows.h>

int main()
{
	setlocale(0,"rus");
	int Number;//���������� ��� ���������� ������������ ������
	std::cin>>Number;
	std::cout<<"����� ���������� �� ����� ����� ����."<<std::endl;
	Sleep(1000);
	if(Number==0||Number==5)std::cout<<"��� �������!������ �� ������ ������ "<<Number<<" �������������,������ ���� ������?"<<std::endl;
	else if(Number==1)std::cout<<"�� ������ ������ "<<Number<<" ������������.������ ������������?"<<std::endl;
	else if(Number<5)std::cout<<"�� ������ ������ "<<Number<<" ������������.������ �������������?"<<std::endl;
	else if(Number<=21)std::cout<<"�� ������ ������ "<<Number<<" ������������.������ �������������?"<<std::endl;
	else std::cout<<"�� ������ ������ "<<Number<<" ������������.������ �������������?"<<std::endl;
	return 0;
	
	
}
