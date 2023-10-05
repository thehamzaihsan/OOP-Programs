#include <iostream> 
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	void setdate(int a, int b , int c){
		day = a;
		month = b;
		year = c;
	}
	void showdate() {
		cout << "The date is " << day << "-" << month << "-" << year << endl;
	}
};

int main()
{
	int a, b, c;
	Date date;
	cout << "Enter day then month then year" << endl;
	cin >> a >> b >> c;
	date.setdate(a, b, c);
	date.showdate();

}