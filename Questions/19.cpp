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
        Vehicle_Policy(int policy_id,string vehicle_name,double amount){
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
    Vehicle_Policy v[3];
    //v[0].display();
    v[0].setAmount(10);
    v[1].setAmount(20);
    v[2].setAmount(5);
    for(int i=0; i<3; i++){
        cout<<v[i].getAmount()<<endl;
    }
    return 0;
}