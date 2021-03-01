#include <iostream>
using namespace std;

string* foo() {
    string* hello = NULL;
    hello = new string("Hello World!");
    return hello;
}

int main()
{
    string* hello = foo();
    cout << *hello << endl;

    delete hello;

    return 0;
}
