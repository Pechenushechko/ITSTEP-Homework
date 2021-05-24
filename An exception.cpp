#include <iostream>
using namespace std;

class DRICKLABRUS {
public:
	DRICKLABRUS(int a);
	int stage;
	void end();
private:
};

DRICKLABRUS::DRICKLABRUS(int a){
	stage = a;
}

void DRICKLABRUS::end() {
	stage = 100;
}

class NPC {
public:
	NPC(int a);
	int hp;
private:

};

NPC::NPC(int a) {
	hp = a;
}

int main() {
	int a;
	int b;
	cout << "Stage:";
	cin >> a;
	cout << "Oldrick health:";
	cin >> b;
	DRICKLABRUS Qwest(a);
	NPC Oldrick(b);
	try {
		if (Qwest.stage == 0 && Oldrick.hp <= 0) throw - 1;
		else if (Qwest.stage > 0 || Qwest.stage < 100 && Oldrick.hp <= 0) throw - 2;
	}
	catch(int a){
		if (a == -1)
		{
			cout << "Oh no, Oldrick was killed. Qwest chain have been corrupted" << endl;
		}
		else if (a == -2) {
			cout << "Oldrick was killed,you falled qwest Dricklabrus" << endl;
		}
		
	}
}
