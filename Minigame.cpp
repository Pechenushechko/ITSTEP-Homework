#include <iostream>
using namespace std;

class Player {
public:
	virtual void attack() = 0;
};


class Dino : public Player
{
public:
	Dino();
	~Dino();
	void set_playible();
	void attack();
	
private:
	int* health;
	bool* playible;
};

Dino::Dino()
{
	health = new int(100);
	playible = new bool(false);
}

Dino::~Dino()
{
	delete health;

	health = 0;
}

void Dino::set_playible() {
	*playible = true;
}

void Dino::attack(){
	health -= 10;
}

class Corona : public Player
{
public:
	Corona ();
	~Corona ();
	void set_playible();
	void attack();

private:
	int* health;
	bool* playible;
};

Corona ::Corona ()
{
	health = new int(50);
	playible = new bool(false);
}

Corona ::~Corona ()
{
	delete health;

	health = 0;
}

void Corona::set_playible() {
	*playible = true;
}

void Corona::attack(){
	health -= 5;
}


int menu() {
	int fighter;
	cout << "Please wait,we loading your information!" << endl;
	cout << "When you wait you can play a short game." << endl;
	cout << "Choose your fighter" << endl;
	cout << "1-Reptile" << endl;
	cout << "2-Virus" << endl;
	cin >> fighter;
	return fighter;
}

void chooser(int x) {
	
}

int main()
{
	Dino Reptile;
	Corona Virus;

	if (menu() == 1) {
		Reptile.set_playible();
	}
	else if(menu() == 2){
		Virus.set_playible();
	}
	
}
