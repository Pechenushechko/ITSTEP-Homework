#include <iostream>
using namespace std;

int main()
{
	const int size = 5;//размер массива
	int shifter[size];
	cout << "Enter multiple numbers for the array:" << endl;//ввод составляющих массива 
	for (int i = 0; i < 5; i++) {
		cin >> shifter[i];
	}
	for (int i = 0; i < 5; i++) {//вывод массива до сдвига
		cout << shifter[i] << ", ";
	}
	cout << endl;

	int temp;
	int step;//переменная для количества шагов сдвига
	cout << "How many steps to move the array?" << endl;//на сколько шагов нужно сделать сдвиг
	cin >> step;
	for (int i = 0, j; i < step; ++i)//сам сдвиг
	{
		temp = shifter[0];
		for (j = 0; j < size - 1; ++j) {
			shifter[j] = shifter[j + 1];
			shifter[j + 1] = temp;
		}
	}
	for (int i = 0; i < 5; i++) {//вывод массива после сдвига
		cout << shifter[i] << ", ";
	}
	cout << endl;
	return 0;
}
