#include <iostream>
#include <ctime>
using namespace std;

class weapon {
public:
    weapon(int base_damage, int durability, int degradation, int cost, int weight); //все важные значения задаются в конструкторе
    int get_base_damage() const;
    int get_durability() const;
    int get_degradation() const;
    void set_cost(int new_cost);
    int get_cost() const;
    int get_weight() const;
    int hit(); //здесь высчитывается результирующая сила удара для данного оружия

private:
    int base_damage; //базовый урон
    int durability; //максимальная прочность
    int degradation; //степень износа оружия
    int cost; //цена
    int weight; //вес
};

weapon::weapon(int base_damage = 10, int durability = 100, int degradation = 0, int cost = 250, int weight = 5) :
    //все важные величины имеют значения по умолчанию
    base_damage(base_damage),
    durability(durability),
    degradation(degradation),
    cost(cost),
    weight(weight)
    //список инициализации: значения аргументов присваиваются членам класса, позволяя оставить тело конструктора пустым
{

}

int weapon::get_base_damage() const { //функция-геттер для базового урона
    return this->base_damage;
}

int weapon::get_durability() const { //функция-геттер для прочности
    return this->durability;
}

int weapon::get_degradation() const { //функция-геттер для степени износа
    return this->degradation;
}

void weapon::set_cost(int new_cost) { //функция-сеттер для цены
    this->cost = new_cost;
}

int weapon::get_cost() const { //функция-геттер для цены
    return this->cost;
}

int weapon::get_weight() const { //функция-геттер для веса
    return this->weight;
}

//все геттеры определены, как константные методы, что позволяет обезопасить члены класса от нежелательных изменений

int weapon::hit() {
    srand(time(0));
    int random_effect = rand() % base_damage; //генерируем случайную величину в пределах от нуля до базового урона - 1
    int damage = this->base_damage - random_effect; //меняем урон: теперь он варьируется от нуля до изначального базового
    this->degradation++; //повышаем износ на единицу с каждым нанесенным ударом
    this->cost -= this->cost / durability; //уменьшаем цену соответственно изношенности оружия
    return damage; //возвращаем урон во внешнюю программу
}

class magic_weapon :public weapon {//класс магии,а пока простозаклинания лечения 
public:
    void set_heal(int x);
    void magic_health(int& player_health);
    void set_magic_damage(int r);
    int get_magic_damage();
private:
    int heal;
    int magic_damage;

};

void magic_weapon :: set_heal(int x) {
    this->heal = x;
}

void magic_weapon::magic_health(int& player_health) {
    player_health += heal;
    if (player_health >= 100) {
        player_health = 100;
    }
}

void magic_weapon::set_magic_damage(int r) {
    this->magic_damage = r;
}

int magic_weapon::get_magic_damage() {
    return this->magic_damage;
}

class dricklabrus : public magic_weapon {//класс единственого водяного меча Дриклабрус
    int dricklabrus_damage;
public:
    void set_dricklabrus_damage(int x);
    int get_dricklabrus_damage();
};

void dricklabrus::set_dricklabrus_damage(int x) {
    this->dricklabrus_damage = x;
}

int dricklabrus::get_dricklabrus_damage() {
    return this->dricklabrus_damage;
}

int main() {
    int choice;
    int main_menu;
    int mana = 10;

    weapon simple_iron_sword, players_BIG_sword(20); //создаем два объекта - два меча, себе и противнику
    magic_weapon Healing_mag;//создаём заклинание лечения
    dricklabrus Dricklabrus;//создаём наше самое сильное оружие

    Dricklabrus.set_dricklabrus_damage(35);
    Dricklabrus.set_magic_damage(40);
    Healing_mag.set_heal(10);

    int enemy_health = 100, player_health = 100; //здоровье для протагониста и для противника
    cout << "Standart RPG game" << endl;
    cout << "1-New game" << endl;
    cout << "2-New game+(Dricklabrus)" << endl;
    cin >> main_menu;
    if (main_menu == 1) {
        while (enemy_health > 0 && player_health > 0) { //ни один из нас не покинет поле боя, пока жив другой...
            cout << "What you gonna do?" << endl;
            cout << "1-heal" << endl;
            cout << "2- attack" << endl;
            cin >> choice;
            if (choice == 1) {
                Healing_mag.magic_health(player_health);
            }
            else if (choice == 2) {
                enemy_health = enemy_health - players_BIG_sword.hit(); //игрок бьет, уменьшается здоровье врага
            }
            player_health = player_health - simple_iron_sword.hit();
            cout << "Enemy's health: " << enemy_health << endl;//здоровье противника
            cout << "My health: " << player_health << endl;//здоровье игрока
        }
        cout << "Player BIG sword condition: " << players_BIG_sword.get_durability() - players_BIG_sword.get_degradation() << endl;
    }
    else if (main_menu == 2) {
        enemy_health = 500;
        while (enemy_health > 0 && player_health > 0) {
            mana += 2;
            if (mana >= 10) {
                mana = 10;
            }
            cout << "What you gonna do?" << endl;
            if (mana == 10) {
                cout << "Your mana = " << mana << endl;
                cout << "1- attack" << endl;
                cout << "2-heal" << endl;
                cout << "3-magic_attack" << endl;
            }
            else {
                cout << "Your mana = " << mana << endl;
                cout << "1- attack" << endl;
                cout << "2-heal" << endl;
            }
            cin >> choice;
            if (choice == 1) {
                enemy_health = enemy_health - Dricklabrus.get_dricklabrus_damage();
            }
            else if (choice == 2) {
                Healing_mag.magic_health(player_health);
            }
            else if (choice == 3) {
                mana = 0;
                enemy_health = enemy_health - Dricklabrus.get_magic_damage();

            }
            player_health = player_health - simple_iron_sword.hit();
            cout << "Enemy's health: " << enemy_health << endl;
            cout << "My health: " << player_health << endl;
        }
        cout << "Dricklabrus condition: " << Dricklabrus.get_durability() - Dricklabrus.get_degradation() << endl;
    }
    cout << "Simple sword condition: " << simple_iron_sword.get_durability() - simple_iron_sword.get_degradation() << endl;
   
    return 0;
}
