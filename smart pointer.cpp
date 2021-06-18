#include <iostream>
using namespace std;

template <typename T>

class Smart_pointer {
    T* point;
public:
    Smart_pointer(T* point) :point(point) {}
    Smart_pointer() :point(nullptr) {}
    Smart_pointer(Smart_pointer& rv) {
        this->point = rv.point;
        rv.point = nullptr;
    }

    Smart_pointer operator=(Smart_pointer& rv){
        if (this->point == rv.point) return *this;

        delete this->point;
        this->point = rv.point;
        rv.point = nullptr;
        return *this;
    }

    ~Smart_pointer() {
        delete point;
    }

    T& operator*() {
        return *point;
    }

    T* operator->() {
        return point;
    }
};


void foo(){
    Smart_pointer<string> str(new string("Revenge"));
    cout << *str << endl;
}

int main()
{

    Smart_pointer<string> p1(new string("its a game of fools"));
    Smart_pointer<string> p2(p1);

    p2 = p2;

    foo();
    
    //встроенные указатели
    auto_ptr<string> p1(new string("Oh god"));

    unique_ptr<string> p2(new string("its Jason Born"));

    shared_ptr<string> p3(new string("Damn"));
}
