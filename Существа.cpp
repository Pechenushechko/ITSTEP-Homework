#include <iostream>
using namespace std;

class creature {
	int id;
	int hp;
	int speed;

public:
	void set_id(int a);
	int get_id();

	void set_hp(int y);
	int get_hp();

	void set_speed(int x);
	int get_speed();

	void health_dicrease(int x);
	void death();
	void run();
};
	
 void creature::set_id(int a) {
	this->id = a;
}

int creature::get_id() {
	return this->id;
}

void creature::set_hp(int y) {
	this->hp = y;
}

int creature::get_hp() {
	return this->hp;
}

void creature::set_speed(int x) {
	this->speed = x;
}

int creature::get_speed() {
	return this->speed;
}

void creature::health_dicrease(int x) {
	hp -= x;
	cout << hp << endl;
}

void creature::death() {
	cout << "ooooohhhh" << endl;
}
	
class snake : public creature {
	int damage;
public:
	void attack();
	void set_damage(int r);
	int get_damage();
};

void snake::set_damage(int r) {
	this->damage = r;
}

int snake::get_damage() {
	return this->damage;
}

void snake::attack(){
	

}

class deer : public creature {
 
};

int main()
{
	deer Oven;
	snake Big_smoke;
	Big_smoke.set_damage(10);
	Oven.set_hp(100);
	Oven.health_dicrease(Big_smoke.get_damage());

}
