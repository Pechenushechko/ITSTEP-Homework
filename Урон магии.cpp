#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;
int player_health = 100;
int npc_health = 100;
int npc_shot;
void query(int& spell);
void spell_query(int& spell);
int heal_spell();
void npc_damage();
void player_death();
void npc_death();
void heal();
int defence_spell();
void cheker();

int main() {
	int spell;
	//int defence = 1;
	while (player_health > 0 && npc_health > 0) {
		cout << "npc health " << npc_health << endl;
		cout << "your health:" << player_health << endl;
		npc_damage();
		cout << npc_shot << endl;
		query(spell);
		spell_query(spell);
		player_death();
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
		defence_spell();
		break;
	case 3:
		npc_death();
		break;
	default:
		cout << "aaaaaa" << endl;
	}
}
int heal_spell() {
	srand(time(0));
	return rand() % 10 + 1;
}

void heal() {
	player_health += heal_spell();
	if (player_health > 100)
		player_health = 100;
}

int defence_spell() {
	return npc_shot = 0; 
}

int attack_spell() {
	srand(time(0));
	return rand() % 10 + 1;
}
void npc_death() {
	npc_health -= attack_spell();
}

void npc_damage(){
	srand(time(0));
	npc_shot = rand() % 10 + 1;
}

void player_death () {
	player_health -= npc_shot; 
}

void cheker() {
	if (player_health < 0)
		cout << "YOU LOSE" << endl;
	else if (npc_health < 0)
		cout << "YOU WON" << endl;
}
