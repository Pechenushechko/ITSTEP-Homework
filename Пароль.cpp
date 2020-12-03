//задание 6 за 03.12.2020
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int password;//Переменная для пароля
    string login;//Переменная для логина 
    
    cout << "Hello again." << endl;
    cout << "Enter your login: ";
    cin>>login;
    cout<<"Now,enter your password:";
    cin>>password;
    if (password < 100000||password>999999)//неправильно ведённый пароль
        cout << "Password isn't correct. Forgot your password? We can send a message to your mail for reset the password." << endl;
    else  
        cout << "Welcome back "<<login<<"."<< endl;//пароль введён правильно

    
    return 0;
}
