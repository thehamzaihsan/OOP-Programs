#include <iostream>
#include <cstring>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 1)
    {
        day = d;
        month = m;
        year = y;
    }

    void printDate()
    {
        cout << day << "-" << month << "-" << year << endl;
    }

    void setDay(int d) { day = d; }
    void setMonth(int m)
    {
        if (m > 12)
        {
            year = +1;
            month += (m - 12);
        }
        else
        {
            month = m;
        }
    }
    void setYear(int y) { year = y; }
    int getDay() { return day; }
    int getmonth() { return month; }
    int getYear() { return year; }
};
class TourPackage
{
private:
    Date startDate;
    int numberOfDays;
    string destination;
    int perpersonPrice;

public:
    TourPackage(Date d, int n, string dt, int p)
    {
        startDate = d;
        numberOfDays = n;
        destination = dt;
        perpersonPrice = p;
    }
    void const printDetails()
    {
        startDate.printDate();
        cout << "numberOfDays"
             << ": " << numberOfDays << endl;
        cout << "destination"
             << ": " << destination << endl;
        cout << "perpersonPrice"
             << ": " << perpersonPrice << endl;
    }
    int getquote(int persons)
    {
        return perpersonPrice * persons;
    }
    void delayTour()
    {
        startDate.setMonth(startDate.getmonth() + 1);
    }
};

int main()
{
    Date D(12, 6 , 2022);
    TourPackage newPackage(D, 3 , "Dubai" , 5000);
    newPackage.printDetails();
    return 0;
}