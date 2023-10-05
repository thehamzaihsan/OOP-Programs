#include <iostream> 
using namespace std;

class Circle
{
private:
	int radius;
	float area;
	float circum;
public:
	void SetRadius(float a) {
		radius = a;
	}
	void ComputeArea() {
		area = 3.14 * radius * radius;
	}
	void PrintArea() {
		cout << "Area is :" << area << endl;
	}
	void ComputeCircumference() {

		circum = 2 * 3.14 * radius;
	}
	void PrintCircumferecne() {
		cout << "Circumference is: " << circum << endl;
	}

};

int main()
{
	int r;
	cout << "Input radius: ";
	cin >> r;
	Circle c;
	c.SetRadius(r);
	c.ComputeArea();
	c.PrintArea();
	c.ComputeCircumference();
	c.PrintCircumferecne();
}