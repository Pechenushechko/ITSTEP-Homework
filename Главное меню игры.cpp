#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(0,"rus");
	bool trigger=true;
	int pa;
	string name;
	
	while (trigger) {
		cout<<"����� ����������."<<endl;
		cout<<"1-���������� ����"<<endl;
		cout<<"2-������ ����� ����"<<endl;
		cout<<"3-��������� ����������"<<endl;
		cout<<"4-����� �� ����"<<endl;
		cin>>pa;
		
		switch(pa){
		
			case 1:
				trigger=true;
				break;
			case 2:
				cout<<"������� ��� ������ ���������:";
				cin>>name;
				trigger=false;
				break;
			case 3:
				cout<<"���� ���������:"<<endl;
				cout<<"Potat.�����-����.�����-����.������� ���������-12."<<endl;
				cout<<"Zip.�����-����.�����-���.������� ���������-30."<<endl;
				cout<<"Vor.�����-�������.�����-��������.������� ���������-80."<<endl;
				trigger=false;
				break;
			case 4:
				trigger=false;
				break;
			default:
				cout<<"���� ����� ������� ������,���������� ���������� ���� ������� :)"<<endl;
				
				
	}
	}
	return 0;
}
