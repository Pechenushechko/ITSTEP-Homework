#include <iostream>
using namespace std;

string*  foo() {
    string* p_d = NULL;
    p_d = new string("Hello world");
    return p_d;
}

int main()
{
    string* p_d =foo();
    //foo();
    cout << *p_d << endl;

    delete p_d;
}
