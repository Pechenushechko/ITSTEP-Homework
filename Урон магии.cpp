#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;
int player_health = 100;
int npc_health = 100;
void query(int& spell);
void spell_query(int& spell);
int heal_spell();
int npc_damage();
int oof();
int oofi();
int heal();
//int defence_spell();
int cheker();

int main() {
	int spell;
	int defence = 1;
	while (player_health > 0 && npc_health > 0) {
		cout << "npc health " << npc_health << endl;
		cout << "your health:" << player_health << endl;
		oof();
		query(spell);
		spell_query(spell);
		cheker();
	}
	return 0;
}

void query(int& spell) {
	cout << "What do you want to use?" << endl;
	cout << "Heal spell - 1" << endl;
	cout << "defence spell - 2" << endl;
	cout << "attack spell - 3" << endl;
	cin >> spell;
}

void spell_query(int& spell) {
	switch (spell) {
	case 1:
		heal();
		break;
	case 2:
		//defence_spell();
		break;
	case 3:
		oofi();
		break;
	default: 
		cout << "aaaaaa" << endl;
	}
}
int heal_spell() {
	srand(time(0));
	return rand() % 10 + 1;
}

int heal() {
	player_health += heal_spell();
	if (player_health > 100)
		player_health = 100;
	return 0;
}

/*int defence_spell(int& defence,) {
	if (defence = 1)
		npc_damage = 0;
	return 0;
}*/

int attack_spell() {
	srand(time(0));
		return rand() % 10 + 1;
}
int oofi() {
	npc_health -= attack_spell();
	return 0;
}

int npc_damage() {
	srand(time(0));
	return rand() % 10 + 1;
}

int oof() {
	player_health -= npc_damage();
	return 0;
}

int cheker() {
	if (player_health < 0) 
		cout << "YOU LOSE" << endl;
	else if  (npc_health < 0)
	cout << "YOU WON" << endl;
	
	return 0;
}
