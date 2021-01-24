#include<iostream>
#include<ctime>
using namespace std;

void var_up(int& var) {
	var += 1;
}

void var_up_too(int* rav) {
	*rav += 1;
}

int main() {
	srand(time(0));
	int var = 0;
	int rar = rand()%1 + 1;
	int* rav = &var;
	var += rar;
	var++;
	var += 1;
	var = var += 1;
	var_up(var);
	var_up_too(rav);
	cout << var << endl;
	return 0;
}