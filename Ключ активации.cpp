#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "rus");
    double key;//key this is the name of the variable activation key

    cout << "Please enter the activation key you received upon purchase: ";
    cin >> key;

    if (key < 100000)
        cout << "Enter a six-digit numeric key." << endl;
    else if (key > 999999)
        cout << "Enter a six-digit numeric key." << endl;
    else  
        cout << "Thank you, we accepted your request, please wait." << endl;

    return 0;
}
