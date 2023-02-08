#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    string dob;

public:
    Student(int roll = 0, string name = "No name", string dob = "No dob")
    {
        this->roll = roll;
        this->name = name;
        this->dob = dob;
    }
    void accept(int roll, string name, string dob)
    {
        this->roll = roll;
        this->name = name;
        this->dob = dob;
    }
    void display()
    {
        cout << this->roll << endl;
        cout << this->name << endl;
        cout << this->dob << endl;
    }
};

int main()
{
    Student s;
    int roll;
    cin >> roll;
    cin.ignore();
    string name;
    getline(cin, name);
    string dob;
    getline(cin, dob);
    s.accept(roll, name, dob);
    s.display();
    return 0;
}