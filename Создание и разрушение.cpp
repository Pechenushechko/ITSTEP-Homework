#include <iostream>
using namespace std;

class slide {
public:
	 slide(string a,int b);
	 ~slide();
	void Illegal();

private:
	string* stunt;
	int* points;
};

 slide::~slide() {
	delete this-> stunt;
	delete this-> points;
	this->stunt = 0;
	this->points = 0;
 }

 slide::slide(string a = NULL,int b = 0){
	 this->stunt = new string(a);
	 this->points = new int(b);
	 
}

 void slide::Illegal() {
	 cout << *stunt << endl;
	 cout << *points << endl;
 }

 int main()
 {
	 slide Kick_flip("Wait,thats illegal", 10);
	 Kick_flip.Illegal();

	 return 0;
 }
