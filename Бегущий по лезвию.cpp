#include <iostream>
using namespace std;

void damage(int& curent_lvl_memory, int& hp) {
    if (curent_lvl_memory <= -10) {
        cout << "You died" << endl;
        hp = 0;
    }
    else if (curent_lvl_memory > -9 && curent_lvl_memory <= -3) {
        hp = hp - curent_lvl_memory;
    }
}
void abbility(int& curent_lvl_memory) {
    if (curent_lvl_memory >= 10) {
        cout << "Its too high to jump" << endl;
    }
}
void action(int& curent_lvl, int& curent_lvl_memory, int& hp) {
    if (curent_lvl_memory == curent_lvl) {
        cout << "go" << endl;
        curent_lvl= curent_lvl_memory;
    }
    else if (curent_lvl_memory > curent_lvl) {
        cout << "jump" << endl;
        curent_lvl= curent_lvl_memory;
        abbility(curent_lvl_memory);
    }
    else if (curent_lvl_memory < curent_lvl) {

        cout << "fall" << endl;

        curent_lvl= curent_lvl_memory;
        damage(curent_lvl_memory, hp);
    }
}

int main() {
    int health = 10;
    int level = 0, next_level;
    int& curent_lvl= level;
    int& curent_lvl_memory = next_level;
    int& hp = health;
 
    do {
        cin >> curent_lvl_memory;
        action(curent_lvl, curent_lvl_memory, hp);
    } while (health > 0);
}
