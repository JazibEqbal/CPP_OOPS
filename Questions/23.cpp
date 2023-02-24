#include <iostream>
#include <cstring>

using namespace std;

class Date{
    private:
       int dd;
       int mm;
       int yy;
    public:
        Date(){}
        Date(int day,int month,int year):dd(day),mm(month),yy(year){}
        void display(){
            cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
        }
};
class Student {
private:
    static int nextRollNumber; 
    int rollNumber;
    char name[50];
    Date dob;
public:
    Student() {
        rollNumber = ++nextRollNumber;
    }
    Student(const char* name,const Date& dateOfBirth):dob(dateOfBirth) {
        rollNumber = ++nextRollNumber;
        strcpy(this->name, name);
    }
    void accept() {
        std::cout << "Enter student name: ";
        std::cin.getline(name, sizeof(name));
        cout << "Enter date of birth (in dd/mm/yyyy format): ";
        int day, month, year;
        cin >> day >>  month >> year;
        dob = Date(day, month, year);
    }
    void display() {
        cout << "Roll number: " << rollNumber << '\n';
        cout << "Name: " << name << '\n';
        cout << "Date of birth: ";
        dob.display();
        cout << '\n';
    }
};

int Student::nextRollNumber = 0;

int main() {
     Student s1;  
     s1.accept(); 
     s1.display(); 

    Student s2("Jazib", Date(26, 07, 2000)); 
    s2.display(); 
    return 0;
}
