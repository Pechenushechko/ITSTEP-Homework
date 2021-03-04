#include<iostream>
using namespace std;

void foo(int* p) {
	cout << "Enter any count:";
	cin >> *p;

	if (*p >= 0) {
		cout << "Your count over 0 " << endl;
	}
	else {
		*p = *p - (*p + *p);
	}
	cout << *p << endl;
}

int main(){
	int* p = new int();

	foo(p);

	delete p;

	p = 0;

	return 0;
}
