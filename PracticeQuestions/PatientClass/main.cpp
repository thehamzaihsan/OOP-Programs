#include <iostream>
#include <fstream>
using namespace std;

class Patient
{
private:
    int ID;
    float temperature;
    int heartRate;

public:
    // ID of the patient
    // Body temperature of patient
    // Heart rate of patient in beats per minute
    Patient(int ID = 0, float temp = 100, int heartRate = 72)
    {
        this->ID = ID;
        this->temperature = temp;
        this->heartRate = heartRate;
    }

    void printData()
    {
        cout << "Patient ID:" << ID << endl;
        cout << "Temperature:" << temperature << endl;
        cout << "Heart Rate:" << heartRate << " beats per minute." << endl;
    }
    int getID() { return ID; }
    int getTemp() { return temperature; }
    int getHeartRate() { return heartRate; }
    friend ostream &operator<<(ostream &os, const Patient p2);
};

ostream &operator<<(ostream &os, const Patient p2)
{
    os << "Patient ID:" << p2.ID << endl;
    os << "Temperature:" << p2.temperature << endl;
    os << "Heart Rate:" << p2.heartRate << " beats per minute." << endl;
    return os;
}

int main()
{
    Patient PatientList[10];

    ofstream ofile("patients.dat", ios::binary);

    Patient p;
    for (int i = 0; i < 10; i++)
    {
        ofile.write((char *)(&PatientList[i]), sizeof(p));
    }

    ofile.close();
    ifstream ifile("patients.dat", ios::binary);

    for (int i = 0; i < 10; i++)
    {
        ifile.read((char *)(&PatientList[i]), sizeof(p));
        if (PatientList[i].getTemp() > 99 || PatientList[i].getTemp() < 60)
        {
            cout << PatientList[i];
        }
    }

    ifile.close();
}