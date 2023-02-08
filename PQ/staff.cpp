#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Staff{
      int id;
      char name[20];
      float salary;
    public:
      Staff(){}
      void accept(){
        cout<<"\n Enter Staff Id : ";
        cin>>id;
        cout<<"\n Enter Staff Name : ";
        cin>>name;
        cout<<"\n Enter Salary : ";
        cin>>salary;
    }
    void display();
    friend void sort(int n,Staff *s);
    void operator=(Staff s1);
};

void Staff::operator=(Staff s){
    id=s.id;
    strcpy(name,s.name);
    salary=s.salary;
}
void Staff::display()
{
    cout<<"\n Staff Id : "<<id;
    cout<<"\n Name : "<<name; 
    cout<<"\n Salary : "<<salary<<"\n";
}
//sort by name
void sort(int n,Staff *s){
    Staff temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int r=strcmp(s[i].name,s[j].name);
            if(r>0){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}


int main(){
    Staff *s;
    int n;
    cout<<"\n Enter No.of Records You Want : ";
    cin>>n;
    s=new Staff[n];
    int choice;
    do{
        cout<<"\n 1. Accept Data ";
        cout<<"\n 2. Display Data ";
        cout<<"\n 3. Sort Data by Name ";
        cout<<"\n 4. Exit: ";
        cout<<"\n\n Enter Your Choice : ";
        cin>>choice;
        switch(choice){
          case 1:
                for(int i=0;i<n;i++){
                    cout<<"\n\n Enter Data for Employee " <<i+1<<"\n";
                    s[i].accept();
                }
           break;
           case 2:
                for(int i=0;i<n;i++){
                   s[i].display();
               }
           break;
           case 3:
               sort(n,s);
               break;
           case 4:
               exit(0);
           default:
               cout<<"Invalid choice..."<<endl;
        }     
    }while(choice !=4);
    return 0;
}