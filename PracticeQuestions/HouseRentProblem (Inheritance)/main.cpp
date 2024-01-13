#include <iostream>
using namespace std;

class House
{
private:
    int rent;
    string location;

public:
    House(int r, string l) : rent(r), location(l) {}
    void virtual CallMyAgent(string str) { cout << "Main Class"; }
    void virtual DisplayDetails() = 0;
};

class UnFurnishedHouse : public House
{
private:
    int customers;
    string reviews;

public:
    UnFurnishedHouse(int c, string rev, int r, string l) : customers(c), reviews(rev), House(r, l) {}
    void CallMyAgent(string str) { cout << str << endl; }
    void DisplayDetails() const
    {
        cout << customers;
        cout << reviews;
    }
};

class FurnishedHouse : public House
{
private:
    int curtains;
    int furniture;
    int electricalItems;

public:
    FurnishedHouse(int c, int f, int e, int r, string l) : curtains(c), furniture(f), electricalItems(e), House(r, l) {}
    void CallMyAgent(string str) { cout << str << endl; }
    void DisplayDetails()
    {
        cout << curtains << endl;
        cout << furniture << endl;
        cout << electricalItems << endl;
    }
};

int main()
{
    House *FHouse = new FurnishedHouse(2, 2, 2, 10, "good");
    FHouse->DisplayDetails();
    FHouse->CallMyAgent("give me a Furnished House Man");
}