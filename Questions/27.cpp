#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empId;
    string empName;
    double basic_Sal;

public:
    Employee(int id = 0, string name = "", double sal = 0) {
        empId = id;
        empName = name;
        basic_Sal = sal;
    }
    void displayDetails() {
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basic_Sal << endl;
    }
    virtual double calculateGrossSalary() {
        return basic_Sal;
    }
    virtual double calculateNetSalary() {
        return calculateGrossSalary() * 0.875;
    }
};

class Manager : public Employee {
private:
    int num_Subordinates;
    double petrol_Allowance;
    double food_Allowance;
    double other_Allowance;
public:
    Manager(int id = 0, string name = "", double sal = 0, int num = 0) : Employee(id, name, sal) {
        num_Subordinates = num;
        petrol_Allowance = 0.07 * basic_Sal;
        food_Allowance = 0.11 * basic_Sal;
        other_Allowance = 0.04 * basic_Sal;
    }
    double calculateGrossSalary() {
        return basic_Sal + petrol_Allowance + food_Allowance + other_Allowance;
    }
    void displayDetails() {
        Employee::displayDetails();
        cout << "Petrol Allowance: " << petrol_Allowance << endl;
        cout << "Food Allowance: " << food_Allowance << endl;
        cout << "Other Allowance: " << other_Allowance << endl;
        cout << "Number of Subordinates: " << num_Subordinates << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
        cout << "Net Salary: " << calculateNetSalary() << endl;
    }
};
class SalesPerson {
protected:
    double salesAmount;

public:
    SalesPerson(double amount = 0) {
        salesAmount = amount;
    }
    virtual double calculateCommission() {
        return salesAmount * 0.10;
    }
    virtual double calculateGrossSalary() {
        return calculateCommission();
    }
    virtual double calculateNetSalary() {
        return calculateGrossSalary() * 0.90;
    }
};

class SalesManager : public SalesPerson, public Manager {
public:
    SalesManager(int id = 0, string name = "", double sal = 0, int num = 0, double sales = 0) : SalesPerson(sales), Manager(id, name, sal, num) {
    }
    double calculateGrossSalary() {
        return SalesPerson::calculateGrossSalary() + Manager::calculateGrossSalary();
    }
    void displayDetails() {
        Manager::displayDetails();
        cout << "Sales Amount: " << salesAmount << endl;
        cout << "Commission: " << calculateCommission() << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
       cout << "Net Salary: " << calculateGrossSalary() * 0.90 << endl;
    }
};

int main() {
    Employee e(101, "Jazib Eqbal", 25000);
    e.displayDetails();
    cout << endl;
    Manager m(102, "Elsa Jean", 145000, 5);
    m.displayDetails();
    cout << endl;
    SalesManager s(103,"Kishore",31000.0,60,50000.0);
    s.displayDetails();
    return 0;
}