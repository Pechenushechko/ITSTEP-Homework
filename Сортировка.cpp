#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int start_time = clock();
	int term = 0;
	srand(time(NULL));
	setlocale(0, "rus");
	int arr[10];
	
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;

	for (int start = 0; start < 10 - 1; start++) {
		int smol = start;
		for (int real_massiv = start + 1; real_massiv < 10; real_massiv++)
		{
			if (arr[real_massiv] > arr[smol])
				smol = real_massiv;
		}
		term = arr[start];
		arr[start] = arr[smol];
		arr[smol] = term;
	}
	
	for (int i = 0; i < 10; ++i) {
		std::cout << arr[i] << ",";
	}
	cout << endl;

	int end_time = clock();
	int result = end_time - start_time;
	cout << result << endl;

	return 0;
}
