#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int EmpId;
    string EmpName;
    double BasicSal;
public:
    Employee() : EmpId(0), EmpName(""), BasicSal(0) {}
    Employee(int id, string name, double salary) : EmpId(id), EmpName(name), BasicSal(salary) {}

    virtual void AcceptDetails() {
        cout << "Enter employee id: ";
        cin >> EmpId;
        cout << "Enter employee name: ";
        cin >> EmpName;
        cout << "Enter basic salary: ";
        cin >> BasicSal;
    }

    virtual void DisplayDetails() {
        cout << "Employee id: " << EmpId << endl;
        cout << "Employee name: " << EmpName << endl;
        cout << "Basic salary: " << BasicSal << endl;
    }

    virtual double CalculateGrossSalary() {
        return BasicSal;
    }

    virtual double CalculateNetSalary() {
        return CalculateGrossSalary() - (0.125 * BasicSal);
    }
};

class Manager : public Employee {
private:
    double PetrolAllowance;
    double FoodAllowance;
    double OtherAllowance;
public:
    Manager() : PetrolAllowance(0), FoodAllowance(0), OtherAllowance(0) {}
    Manager(int id, string name, double salary) : Employee(id, name, salary) {
        PetrolAllowance = 0.07 * BasicSal;
        FoodAllowance = 0.11 * BasicSal;
        OtherAllowance = 0.04 * BasicSal;
    }

    void AcceptDetails(){
        Employee::AcceptDetails();
    }

    void DisplayDetails(){
        Employee::DisplayDetails();
        cout << "Petrol allowance: " << PetrolAllowance << endl;
        cout << "Food allowance: " << FoodAllowance << endl;
        cout << "Other allowance: " << OtherAllowance << endl;
    }

    double CalculateGrossSalary(){
        return BasicSal + PetrolAllowance + FoodAllowance + OtherAllowance;
    }
};

class MarketingExecutive : public Employee {
private:
    int KilometersTravelled;
    int TourAllowance;
    double TelephoneAllowance;
public:
    MarketingExecutive() : KilometersTravelled(0), TourAllowance(0), TelephoneAllowance(2000) {}
    MarketingExecutive(int id, string name, double salary) : Employee(id, name, salary) {
        KilometersTravelled = 0;
        TourAllowance = 0;
        TelephoneAllowance = 2000;
    }

    void AcceptDetails(){
        Employee::AcceptDetails();
        cout << "Enter kilometers travelled: ";
        cin >> KilometersTravelled;
        TourAllowance = KilometersTravelled * 5;
    }

    void DisplayDetails(){
        Employee::DisplayDetails();
        cout << "Kilometers travelled: " << KilometersTravelled << endl;
        cout << "Tour allowance: " << TourAllowance << endl;
        cout << "Telephone allowance: " << TelephoneAllowance << endl;
    }

    double CalculateGrossSalary(){
        return BasicSal + TourAllowance + TelephoneAllowance;
    }
};
int main() {
    Employee* emp = new Employee();
    emp->AcceptDetails();
    emp->DisplayDetails();
    cout << "Gross Salary: " << emp->CalculateGrossSalary() << endl;
    cout << "Net Salary: " << emp->CalculateNetSalary()<<endl;
    return 0;
}
