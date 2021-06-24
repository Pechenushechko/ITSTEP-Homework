#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class User {
    string login;
    string password;
public:
    User(string a, string b) {
        login = a;
        password = b;
    }
    User(){}
    string getPwd() { return password; }
    void setPwd(string value) { password = value; }
   void print() {
        cout << login<<endl;
        cout << password << endl;
    }
};

string generatePwd(int n = 10) {
    string newpwd;
    string s = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
    for (int i = 0; i < n; i++) {
        newpwd += s[rand() % s.length()];
    }
    return newpwd;
}

void Func(int a) {

}

int main()
{
    void (*ptr)(int) = [](int x) {
        cout << x * x << endl;
    };
  
    vector<User> users;
    users.push_back(User("Johny", "Silverhand"));
    users.push_back(User("Beast", "Number_6"));
    users.push_back(User("V", "Jecky"));
    users.push_back(User("Alt", "Netrunner"));

    for_each(users.begin(), users.end(), [](User& u) {
        if (u.getPwd().length() < 8)
        {
            u.setPwd(generatePwd());
        }
    });

    for (auto item : users) {
        item.print();
    }

    /*vector<int> nums{5,7,2,5,3,12,5,2,5,8};
    sort(nums.begin(),nums.end());
    reverse(nums.begin(), nums.end());
    for (int item : nums) cout << item <<" " ;

    cout<<endl << count(nums.begin(), nums.end(), 5) << endl;

    unique(nums.begin(), nums.end());
    for (int item : nums) cout << item << " ";

    (nums.begin(), nums.end());

    string str = "Hello,world!";
    for (char& item : str) item = tolower(item);
    cout<<endl << count(str.begin(), str.end(), 'l')<<endl;*/

    /*string text, a = "qwertyuiopasdfghjklzxcvbnm";
    sort(a.begin(), a.end());

    fstream file("TextFile2.txt");
    getline(file, text, '\0');
    file.close();

     int l_c = 0;

    for (char l : a) {
        l_c = count(text.begin(), text.end(), l);
        l_c += count(text.begin(), text.end(), toupper(l));
        cout << l << "-" << l_c << endl;
    }*/

    /*vector<string> names{
        "John","Alex","Anna","Sam","John","Lily","Victoria"
    };*/
    /*
    //remove(names.begin(), names.end(), "John");
    replace(names.begin(), names.end(), "John", "Jaxi");
    for (string item : names) cout << "Name:" << item << endl;*/

    /*for_each(names.begin(), names.end(), [](string& a) {
        for (int i = 0; i < a.size(); i++)
            a[i] = toupper(a[i]);
        });*/
}
