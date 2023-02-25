#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;
public:
    Employee(string name, int id, double salary) {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    double getSalary() const {
        return salary;
    }
};

template<typename T>
void Sort(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i].getSalary() > arr[j].getSalary()) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    Employee employees[] = {
        Employee("A", 1, 50000),
        Employee("B", 2, 7000),
        Employee("C", 3, 60000),
        Employee("D", 4, 10000),
        Employee("E", 5, 180000)
    };

    int size = sizeof(employees) / sizeof(employees[0]);
    Sort(employees, size);

    for (int i = 0; i < size; i++) {
        cout << employees[i].getName() << " " << employees[i].getId() << " " << employees[i].getSalary() << endl;
    }

    return 0;
}
