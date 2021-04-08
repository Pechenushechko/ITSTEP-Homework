#include <iostream>
using namespace std;

class Base {
public:
    virtual void setter(int x) = 0;
    virtual int getter() = 0;
protected:
    int a = 0;
};

class A:public Base {
public:
    void setter(int x) { this->a = x; }
    int getter(){return a;};
private:
    //int a;
};

class B :public Base {
public:
    void setter(int x) { this->a = x + 2; }
    int getter() { return a; };
private:
    //int a;
};

int main()
{
    A aa;
    B bb;
                                                                                          
    aa.setter(2);
    cout << aa.getter() << endl;
   
    bb.setter(2);
    cout << bb.getter() << endl;
}
