#include <iostream>
using namespace std;

class gifts {
public:
    virtual void set_count(int x) = 0;
    virtual void show_count() = 0;
protected:
    int count;

};

class trophies:public gifts {
public:
    void set_count(int x) { this->count = x; }
    void show_count() { cout <<"Number of yours trophies:"<< count << endl; }
private:

};

class sticker_packs:public gifts {
public:
    void set_count(int x) { this->count = x * 5; }
    void show_count() { cout<<"Number of yours stickers:"<<count<<endl; }
private:
};

class users {
public:
    void show_gifts();
    trophies medals;
    sticker_packs coockies;
private:

};

void users::show_gifts(){
    //cout <<  << endl;
}

int main()
{
    int present;
    bool menu = true;

    users user;
    user.medals.set_count(5);
    user.coockies.set_count(2);

    while (menu) {
        cout << "What type of gifts to show ?" << endl;
        cout << "1-trophies" << endl;
        cout << "2-sticker_packs" << endl;
        cin >> present;
        if(present == 1){
            user.medals.show_count();
        }
        else if (present == 2) {
            user.coockies.show_count();
        }
        else {
            cout << "what a fool!" << endl;
            menu = false;
        }
    }
}
