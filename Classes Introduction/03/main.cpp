#include <iostream> 
using namespace std;

class Ship
{
private:
	string name;
	int number;
	float longt;
	float lat;
public:
	void store(string nm , int n, float lon , float lati) {
		name = nm;
		number = n;
		longt = lon;
		lat = lati;
	}
	void display() {
		cout << "Ship name is: " << name << endl;
		cout << "Ship number is: " << number << endl;
		cout << "Ship longtitude is: " << longt << endl;
		cout << "Ship latitude is: " << lat << endl;
	}
};

int main()
{
	Ship ships[3];
	string name;
	int n;
	float lon, lat;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter number: ";
		cin >> n;
		cout << "Enter long: ";
		cin >> lon;
		cout << "Enter lat: ";
		cin >> lat;
		ships[i].store(name, n, lon, lat);
		cout << "-------------------" << endl << endl;
	}

	cout << "Ships details are: " << endl;

	for (int i = 0; i < 3; i++)
	{
		ships[i].display();
		cout << endl;
	}

}