#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;

int GetRandomNumber(int min, int max)
{
 
  srand(time(NULL));

  
  int num = min + rand() % (max - min + 1);

  return num;
}

int main()
{
  setlocale (0,"rus");
  int cabinet; //cabinet ��� �������� ���������� ��������� ��������
  cout<<"�����������,������� ����������,����� ������� ������ ��������?"<<endl;
  cabinet = GetRandomNumber(1, 60);
  cout << "������ �������� ������� ��� �������: " << cabinet << endl;
  cout<<"�������!"<<endl;
 cout<<"*�� �����*"<<endl;
 cout<<"�����������,����� ����� ���� �� �������� ��� ������� "<<cabinet<<" ����������?"<<endl;
 cout<<"�����������,��� �������."<<endl;
  return 0;
  
}
