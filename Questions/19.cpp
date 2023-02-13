#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Vehicle_Policy{
    private:
        int policy_id;
        string vehicle_name;
        double amount;     
    public:
        Vehicle_Policy(){
            policy_id = 0;
            vehicle_name = "";
            amount = 0;
        }
        void set(int policy_id,string vehicle_name,double amount){
            this->policy_id = policy_id;
            this->vehicle_name = vehicle_name;
            this->amount = amount;
        }
        void setId(int id){
            this->policy_id = id;
        }
        void setName(string name){
            this->vehicle_name = name;
        }
        void setAmount(double amount){
            this->amount = amount;
        }
        int getId(){
            return policy_id;
        }
        string getName(){
            return vehicle_name;
        }
        double getAmount(){
            return amount;
        }
        void display(){
            cout<<"Id: "<<getId()<<endl;
            cout<<"Vehicle_Name: "<<getName()<<endl;
            cout<<"Amount: "<<getAmount()<<endl;
        }
};


int main(){
    Vehicle_Policy *v;
    cout<<"Enter number of records ";
    int n;
    cin>>n;
    v=new Vehicle_Policy[n];
    for(int i=0;i<n;i++){
        cout<<"Enter id "<<i+1<<endl;
        int id;
        cin>>id;
        cout<<"Enter name"<<endl;
        string name;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter amount"<<endl;
        double amount;
        cin>>amount;
        v[i].set(id,name,amount);
    }
    for(int i=0; i<n; i++){
        v[i].display();
    }
    return 0;
}