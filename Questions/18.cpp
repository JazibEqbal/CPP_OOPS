#include<iostream>
using namespace std;

class Employee{
    private:
       int emp_id;
       string emp_name;
       double salary;
    public:
       Employee();
       Employee(int id,string name,double salary);
       void accept(int id,string name,double salary);
       void display();
};
Employee::Employee(){
    emp_id = 0;
    emp_name = "";
    salary = 0;
};

Employee::Employee(int id,string name,double salary){
       this->emp_id=id;
       this->emp_name=name;
       this->salary = salary;
}
void Employee::accept(int id,string name,double salary){
       this->emp_id=id;
       this->emp_name=name;
       this->salary = salary;
}
void Employee::display(){
    cout<<"Id:"<<this->emp_id<<endl;
    cout<<"Name:"<<this->emp_name<<endl;
    cout<<"Salary "<<this->salary<<endl;
}

int main(){
    Employee e[5];
    for(int i=0;i<5;i++){
        cout<<"Enter "<<i+1<<" Employee ID: " <<endl;
        int id;
        cin>>id;
        cout<<"Enter Employee Name: "<<endl;
        string name;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Employee Salary: "<<endl;
        double salary;
        cin>>salary;
       e[i].accept(id,name,salary);
    }
    for(int i=0;i<5;i++){
       e[i].display();
    }
    return 0;
}