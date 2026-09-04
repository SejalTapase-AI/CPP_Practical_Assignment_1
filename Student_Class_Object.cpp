#include <iostream>
#include <string>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float marks;

public:

    // Constructor
    Student()
    {
        cout << "Constructor called." << endl;
    }

    // Function to accept student details
    void inputData()
    {
        cout << "Enter Roll No.: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void displayData()
    {
        cout << endl;
        cout << "Student Details:" << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    Student s1;

    s1.inputData();
    s1.displayData();

    return 0;
}
