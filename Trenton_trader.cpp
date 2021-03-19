#include <iostream>
#include<Windows.h>
using namespace std;

class inventory {
public:
      void invent();
      void open_inventory();
private:
      string* inventory;
      int item_counter;
};

void inventory::invent() {
    item_counter = 5;
    inventory = new string[item_counter];
    inventory[0] = "Piece of cloth";
    inventory[1] = "Books of magic";
    inventory[2] = "Iron sword";
    inventory[3] = "Strange shard";
    inventory[4] = "Picklocks";
}

void inventory::open_inventory() { 
    for (int i = 0; i < item_counter; i++) { cout <<  inventory[i] << endl; }
    cout << endl;
}

class NPC {
  public:
      virtual void dialogue();
      inventory merchant_inventory;
  private:
     
};

void NPC :: dialogue() {
    cout << "Hey you!" << endl;
    cout << "I dont know you,but be carefull!" << endl;
    cout << "In this village is happening something strange." << endl;
}

class merchant :public NPC {
    public:
        void dialogue();
    private:
    
};

void merchant :: dialogue() {
    cout << "Oh, new customer,tell me what you want!" << endl;
    cout << "I think in my store you can got everything you need!" << endl;
}

int main()
{
    merchant Don_Duran;
    Don_Duran.merchant_inventory.invent();
    Don_Duran.dialogue();
    Don_Duran.merchant_inventory.open_inventory();
}
