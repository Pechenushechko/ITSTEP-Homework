#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(0, "Rus");
	int a, exit=0;
	while (exit != 1) {
	string name;
	cout << "1-����������" << endl;
	cout << "2-����� ����" << endl;
	cout << "3-�������� ����������" << endl;
	cout << "4-���������"<< endl;
	cout << "5-�����" << endl;
	cin >> a;
		switch (a) {
		case 1:
		{
			cout << "����� ����������." << endl;
			break;
		}
		case 2:
		{
			cout << "������� ��� ���������:";
			cin>>name;

			cout << "��������������. �� ��������� ����� ���� � ������ " << name << endl;
			exit = 1;
			break;
		}
		case 3:
		{
			cout << "1-����� ������� ����� � ������������" << endl;
			cout << "2-����� ������ ��� ������������" << endl;
			cout << "3-������� � �������" << endl;
			int upload;
			cin >> upload;
			switch (upload) {
			case 1:
			{
				cout << "�� ������������ ����� ������� ����� � ������������" << endl;
				break;
			}
			case 2:
			{
				cout << "�� ������������ ����� ������ ��� ������������" << endl;
				break;
			}
			case 3:
			{
				cout << "�� ������������ � �������" << endl;
			}
			default:
			{
				cout << "�� ��� �������?" << endl;
				break;
			}
			}
			exit = 1;
			break;
		}
		case 4:
		{
			int set;
			int graf;
			int dif;
			cout<<"1-��������� ����"<<endl;
			cout<<"2-�������"<<endl;
			cout<<"3-������������"<<endl;
			cin>>set;
			switch (set)
			{
				case 1:
				{
					cout<<"������� ��������� ����-�������"<<endl;
					cout<<"1-������"<<endl;
					cout<<"2-�������"<<endl;
					cout<<"3-�������� � ����"<<endl;
					cin>>dif;
					
					if(dif==1||dif==2)
				       cout<<"��� ������� ��������� ��� ������."<<endl;
					else 
					 	cout<<"����������� � ����"<<endl;	
				
				break;
			}
				case 2:{
					cout<<"������� ��������� �������-�������"<<endl;
					cout<<"1-������"<<endl;
					cout<<"2-�������"<<endl;
					cout<<"3-�������� � ����"<<endl;
					cin>>graf;
					
					if(graf==1||graf==2)
				       cout<<"��������� ������� ���� ��������."<<endl;
					else 
					 	cout<<"����������� � ����"<<endl;
				
				break;
			}
				case 3:
					cout<<"������������ ���� ���������:";
					cout<<"Vladislav � Vladimir"<<endl;
				
				break;
				default:
					cout<<"�� ���� ��� ������."<<endl;
			}
			
			break;
		}
		break;
		case 5:
		{
			cout << "�� ������� ��� ������ ����� �� ����,�� ����������� ������ ����� ��������?����������� �����- ����� 1,����� ������ ����� �������� �����." << endl;
			cin >> exit;
			if (exit == 1)
				cout << "����� �� ����,���������� ���������." << endl;
			else
				cout << "����������� � ����" << endl;
			break;
		}
		default:
		{
			cout << "�� ���� �����? " << endl;
			break;
		}




		}
	}
}


