#include <iostream>
#include <vector>
#include<fstream>
#include<ostream>
#include<istream>
using namespace std;

class Monitor
{
public:
	Monitor();
	~Monitor();
	virtual void print();
private:
	int display;
};

Monitor::Monitor()
{
	display = 0;
}

class stand : public Monitor
{
public:
	stand();
	~stand();

private:
	int screws;
};

stand::stand()
{
	screws = 0;
}

class cable:public Monitor
{
public:
	cable();
	~cable();

private:
	int lenght;
};

cable::cable()
{
	lenght = 0;
}

void read(vector<unique_ptr<Monitor>>& v) {
	ifstream file("TextFile1.txt");
	string type ,s1,s2;
		for (int i = 0; i < 4; i++) {
			getline(file, type, ';');
			getline(file, s1, ';');
			getline(file, s2);
			if (type == "stand") v.push_back(unique_ptr<Monitor>(new stand(s1, s2)));
			else
				v.push_back(unique_ptr<Monitor>(new cable(s1, s2)));
	}

	file.close();
}

void print(vector<unique_ptr<Monitor>>& v) {
	for (int i = 0; i < v.size(); i++)
	{
		cout << i << ")" << endl;
		v[i]->print();
		cout << "---------------------------------------------------" << endl;
	}
}

int main()
{
	vector<unique_ptr<Monitor>> v;
	read(v);
	print(v);
}
