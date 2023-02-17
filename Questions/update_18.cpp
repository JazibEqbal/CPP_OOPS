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
       void update(double salary);
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
    cout<<"Salary "<<this->salary#include<iostream>
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
       void update(double salary);
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
    cout<<"\n";
}
void Employee::update(double salary){
    this->salary=salary;
};
int main(){
    cout<<"Enter the number of records you want to create"<<endl;
    int n;
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++){
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
        cout<<"\n";
    }
    cout<<"Do you want to update a record?"<<endl;
    cout<<"Press 1 for Yes"<<endl;
    cout<<"Press 2 for No"<<endl;
    int i;
    cin>>i;
    if(i == 1){
        cout<<"Enter the inndex where you want to update"<<endl;
        int index;
        cin>>index;
        if(index<n){
             cout<<"Enter new Salary: "<<endl;
             double salary;
             cin>>salary;
             e[index].update(salary);
             cout<<"\n";
        }
        else{
            cout<<"No employee found"<<endl;
        }
    }
    cout<<"Displaying all the records"<<endl;
    for(int i=0;i<n;i++){
       e[i].display();
    }
    return 0;
}<<endl;
    cout<<"\n";
}
void Employee::update(double salary){
    this->salary=salary;
};
int main(){
    cout<<"Enter the number of records you want to create"<<endl;
    int n;
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++){
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
        cout<<"\n";
    }
    cout<<"Do you want to update a record?"<<endl;
    cout<<"Press 1 for Yes"<<endl;
    cout<<"Press 2 for No"<<endl;
    int i;
    cin>>i;
    if(i == 1){
        cout<<"Enter the inndex where you want to update"<<endl;
        int index;
        cin>>index;
        if(index<n){
             cout<<"Enter new Salary: "<<endl;
             double salary;
             cin>>salary;
             e[index].update(salary);
             cout<<"\n";
        }
        else{
            cout<<"No employee found"<<endl;
        }
    }
    cout<<"Displaying all the records"<<endl;
    for(int i=0;i<n;i++){
       e[i].display();
    }
    return 0;
}
