#include <iostream>
using namespace std;

class LoanApplicant
{
protected:
    int loanAmount;
    int startDate;
    int months;
    int salary;

public:
    LoanApplicant(int lA, int sD, int mon, int s) : loanAmount(lA), startDate(sD), months(mon), salary(s) {}

    void virtual print() = 0;
    bool virtual isApproved() = 0;
};

class HomeLoanApplicant : public LoanApplicant
{

private:
    int landValue;

public: // Value of land on which construction is to be done
    HomeLoanApplicant(int lV, int lA, int sD, int mon, int s) : landValue(lV), LoanApplicant(lA, sD, mon, s) {}
    void print()
    {
        cout << loanAmount << endl;
        cout << startDate << endl;
        cout << months << endl;
        cout << salary << endl;
        cout << landValue << endl;
    }
    bool isApproved()
    {
        if (salary * 50 > loanAmount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class CarLoanApplicant : public LoanApplicant
{
private:
    int modelYear; // The year of the model of the car like 2020, 2021
public:
    CarLoanApplicant(int lV, int lA, int sD, int mon, int s) : modelYear(lV), LoanApplicant(lA, sD, mon, s) {}
    void print()
    {
        cout << loanAmount << endl;
        cout << startDate << endl;
        cout << months << endl;
        cout << salary << endl;
        cout << modelYear << endl;
    }
    bool isApproved()
    {
        if (salary * 20 > loanAmount && modelYear > 2020)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    LoanApplicant *l1 = new HomeLoanApplicant(1000000, 2020, 12, 10000, 1000000);
    LoanApplicant *l2 = new CarLoanApplicant(2020, 1000000, 12, 10000, 1000000);
    cout << l1->isApproved();
    cout << l2->isApproved();
    return 0;
}