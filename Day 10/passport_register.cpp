#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Passport 
{
private:
    string name;
    string nationality;
    string passportNumber;
    string dateOfBirth;
    string gender;

public:
    void registerPassport() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Nationality: ";
        getline(cin, nationality);
        cout << "Enter Passport Number: ";
        getline(cin, passportNumber);
        cout << "Enter Date of Birth (DD/MM/YYYY): ";
        getline(cin, dateOfBirth);
        cout << "Enter Gender: ";
        getline(cin, gender);

        ofstream outFile("passport_data.txt", ios::app);
        if (outFile.is_open()) {
            outFile << name << "," << nationality << "," << passportNumber << ","
                    << dateOfBirth << "," << gender << "\n";
            outFile.close();
            cout << "Passport registered successfully!";
        } else {
            cout << "Error opening file!\n";
        }
    }

    void displayAllPassports() {
        ifstream inFile("passport_data.txt");
        string line;
        cout << "\n--- Registered Passports ---\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
};

int main() 
{
    Passport p;
    int choice;

    do 
    {
        cout << "\nPassport Registration System\n";
        cout << "1. Register Passport\n";
        cout << "2. Display All Passports\n";
        cout << "3. Exit\n:";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                p.registerPassport();
                break;
            case 2:
                p.displayAllPassports();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } 
    while (choice != 3);

    return 0;
};