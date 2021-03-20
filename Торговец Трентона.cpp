#include <iostream>
#include<Windows.h>
using namespace std;

class inventory {
public:
     inventory();
    ~inventory();
    void open_inventory();
    void add(string some_item);
    void remove(string some_item);
private:
    string* invent;
    int item_counter;

};

 inventory::inventory() {
    item_counter = 5;
    invent = new string[item_counter];
    invent[0] = "Piece of cloth";
    invent[1] = "Books of magic";
    invent[2] = "Iron sword";
    invent[3] = "Strange shard";
    invent[4] = "Picklocks";
}

inventory::~inventory() { 
    delete [] invent;
    invent = 0;
}

void inventory::open_inventory() {
    for (int i = 0; i < item_counter; i++) { cout << invent[i] << endl; }
    cout << endl;
}

void inventory::add(string some_item) { 
    item_counter++; 
    string* temp = new string[item_counter]; 
    for (int i = 0; i < item_counter - 1; i++) temp[i] = invent[i]; 
     temp[item_counter - 1] = some_item; 
    delete[] invent; 
    invent = temp;  
    temp = 0; 
};

void inventory::remove(string some_item) { 
    int search = 0;
    string temp_2;
    for (int i = 0; i < item_counter; i++) {
        if (invent[i] == some_item) {
            search = i;
            break;
        }
    }
    if (search != item_counter - 1) {
        for (int i = search; i < item_counter - 1; i++) {
           invent[i] = invent[i + 1];
        }
    }
    else {
        cout << "fsdf " << endl;
    }
    item_counter--;
    string* temp = new string[item_counter];
    for (int i = 0; i < item_counter - 1; i++) temp[i] = invent[i];
    temp[item_counter - 1] = invent[item_counter - 1];
    delete[] invent; 
    invent = temp; 
    temp = 0;
}

class NPC {
public:
    virtual void dialogue();
    inventory merchant_inventory;
private:

};

void NPC::dialogue() {
    cout << "Hey you!" << endl;
    cout << "I dont know you,but be carefull!" << endl;
    cout << "In this village is happening something strange." << endl;
}

class merchant :public NPC {
public:
    void dialogue();
private:

};

void merchant::dialogue() {
    cout << "Oh, new customer,tell me what you want!" << endl;
    cout << "I think in my store you can got everything you need!" << endl;
    cout << "Choose what you want" << endl;
}

int main()
{
    bool trader_menu = true;
    int product;
    merchant Don_Duran;
    
    Don_Duran.dialogue();
    Sleep(3600);
    Don_Duran.merchant_inventory.open_inventory();
    cin >> product;//вводить нужно цифру под которой указан нужный обьект,обьекты расположенны по порядку
    switch(product){
    case 1:
    Don_Duran.merchant_inventory.remove("Piece of cloth");
    break;
    case 2:
     Don_Duran.merchant_inventory.remove("Books of magic");
     break;
    case 3:
      Don_Duran.merchant_inventory.remove("Iron sword");
      break;
    case 4:
     Don_Duran.merchant_inventory.remove("Strange shard");
      break;
    case 5:
        Don_Duran.merchant_inventory.remove("Picklocks");
        break;
}
        Don_Duran.merchant_inventory.open_inventory();
     return 0;
}
