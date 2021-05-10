#include <iostream>
using namespace std;

class Vector {
public:
	Vector(int x,int y,int z,int a);
	Vector& operator= (const Vector& c);
private:
	int x1;
	int y1;
	int x2;
	int y2;
};

Vector::Vector(int x,int y,int z,int a) {
	x1 = x;
	y1 = y;
	x2 = z;
	y2 = a;
}

Vector& Vector :: operator= (const Vector& c) {
	this->x1 = c.x1;
	this->y1 = c.y1;
	this->x2 = c.x2;
	this->y2 = c.y2;
	return *this;
}

int main() {

}
