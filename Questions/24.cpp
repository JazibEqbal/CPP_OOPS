#include<iostream>
using namespace std;

class Employee {
protected:
    int emp_id;
    string name;
    string dob;

public:
    Employee(int id, string nm, string db) {
        emp_id = id;
        name = nm;
        dob = db;
    }

    virtual void displayDetails() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Date of birth: " << dob << endl;
    }

    virtual float calculateSalary() {
        return 0;
    }
};

class WageEmployee : public Employee {
protected:
    float hours_worked;
    float rate_per_hour;

public:
    WageEmployee(int id, string nm, string db, float hours, float rate) : Employee(id, nm, db) {
        hours_worked = hours;
        rate_per_hour = rate;
    }

    void displayDetails(){
        Employee::displayDetails();
        cout << "Hours worked: " << hours_worked << endl;
        cout << "Rate per hour: " << rate_per_hour << endl;
    }

    float calculateSalary(){
        return hours_worked * rate_per_hour;
    }
};

class SalesPerson : public WageEmployee {
protected:
    float items_sold;
    float commission_per_item;

public:
    SalesPerson(int id, string nm, string db, float hours, float rate, float sold, float commission) : WageEmployee(id, nm, db, hours, rate) {
        items_sold = sold;
        commission_per_item = commission;
    }

    void displayDetails() {
        WageEmployee::displayDetails();
        cout << "Items sold: " << items_sold << endl;
        cout << "Commission per item: " << commission_per_item << endl;
    }

    float calculateSalary() {
        return WageEmployee::calculateSalary() + (items_sold * commission_per_item);
    }
};
int main() {
    WageEmployee we(1001, "Jazib", "01/01/2000", 8, 50);
    we.displayDetails();
    cout << "Salary: " << we.calculateSalary() << endl;

    SalesPerson sp(1002, "Jaye", "22/12/1999", 7, 40, 10, 10);
    sp.displayDetails();
    cout << "Salary: " << sp.calculateSalary() << endl;

    return 0;
}