#include <iostream>
#include <fstream>
using namespace std;

class Event
{
private:
    int ev_ID;
    int part_No;

public:
    Event(int e, int p)
    {
        ev_ID = e;
        part_No = p;
    }
    Event() {}
    void input()
    {
        cout << "Enter ID: ";
        cin >> ev_ID;
        cout << "Enter Participants Number: ";
        cin >> part_No;
    }
    void writeToDisk()
    {
        ofstream outfile("PERSON.dat", ios::binary);
        outfile.write(reinterpret_cast<char *>(&*this), sizeof(*this));
    }
    void const showData(){
        cout << "ID: " << ev_ID << endl;
        cout << "Numbers: " << part_No << endl;
    }
    void readFromDisk(int recordNo){
        ifstream infile("PERSON.dat", ios::binary); 
        streampos position = static_cast<streampos>(recordNo - 1) * sizeof(Event);
        infile.seekg(position, ios::beg);
        infile.read(reinterpret_cast<char*>(this), sizeof(Event));
        this->showData();
        infile.close();
    }
};

int main()
{
    char o;
    do
    {
        Event e;
        e.input();
        e.writeToDisk();

    } while (cin >> o && o == 'y');
    
   Event e1;
   e1.readFromDisk(1);

  
	 
    

}