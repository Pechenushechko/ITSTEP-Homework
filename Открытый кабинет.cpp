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
  int cabinet; //cabinet это название переменной открытого кабинета
  cout<<"Здраствуйте,скажите пожалуйста,какой кабинет сейчас свободен?"<<endl;
  cabinet = GetRandomNumber(1, 60);
  cout << "Сейчас свободен кабинет под номером: " << cabinet << endl;
  cout<<"Спасибо!"<<endl;
 cout<<"*На вахте*"<<endl;
 cout<<"Здраствуйте,можно взять ключ от кабинета под номером "<<cabinet<<" пожалуйста?"<<endl;
 cout<<"Здраствуйте,вот держите."<<endl;
  return 0;
  
}
