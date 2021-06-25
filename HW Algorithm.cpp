#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class User {
    string login;
    string password;
    string email;
    string phone;
public:
    User(string a,string b,string c,string d);
    User() {}

    string getPwd() { return this->password; }
    void setPwd(string value) { password = value; }

    string getPhone() { return this->phone; }
    void setPhone(string value) { phone = value; }

    void print() {
        cout << "Login:"<< login << endl;
        cout << "Password:"<< password << endl;
        cout << "Email:"<< email << endl;
        cout << "Phone:"<< phone << endl;
        cout<<""<< endl;
    }
};

User::User(string a,string b,string c,string d) {
    login = a;
    password = b;
    email = c;
    phone = d;
}

string generatePwd(int n = 10) {
    string newpwd;
    string s = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
    for (int i = 0; i < n; i++) {
        newpwd += s[rand() % s.length()];
    }
    return newpwd;
}

string generatePhone(int a = 11) {
    string newPhone;
    string p = "1234567890";
    for (int i = 0; i < a; i++) {
        newPhone += p[rand() % p.length()];
    }
    return newPhone;
}

int main()
{
    vector<User> users;

    users.push_back(User("Geralt","Rivia","plotva@velen.neverland","8707700129"));
    users.push_back(User("Eniffer","Vengerberg","Unicorn@vizima.neverland","84563298661"));
    users.push_back(User("Dandelion","Jaskier","chameleon@novigrad.neverland","85274098561"));
    users.push_back(User("Ciri","Fiona","kaer@morchen.neverland","8765934281"));

    for_each(users.begin(), users.end(), [](User& u) {
        if (u.getPwd().length() < 6)
        {
            u.setPwd(generatePwd());
        }
        if (u.getPhone().length() < 11) {
            u.setPhone(generatePhone());
        }
        });

    for (auto item : users) {
        item.print();
    }
}
