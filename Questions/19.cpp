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
            cout<<"\n";
        }
        void getAll();
        static void Sort_Vehicle(Vehicle_Policy[],int);
};
void Vehicle_Policy::getAll(){
    cout<<getId()<<" "<<getName()<<" "<<getAmount()<<endl;
}
bool Compare(Vehicle_Policy v1,Vehicle_Policy v2){
    return v1.getAmount()>v2.getAmount();
}

void Vehicle_Policy::Sort_Vehicle(Vehicle_Policy v[],int n){
    sort(v,v+n,Compare);
}

int main(){
    Vehicle_Policy *v;
    cout<<"Enter number of records "<<endl;
    int n;
    cin>>n;
    v=new Vehicle_Policy[n];
    for(int i=0;i<n;i++){
        cout<<"Enter id "<<i+1<<endl;
        int id;
        cin>>id;
        cout<<"Enter name "<<endl;
        string name;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter amount "<<endl;
        double amount;
        cin>>amount;
        v[i].set(id,name,amount);
    }
	Vehicle_Policy::Sort_Vehicle(v,n);
	cout<<"Sorting data in decreasing order :"<<endl;
	for(int i=0;i<n;i++){
	    v[i].getAll();
	}

	cout<<"Highest policy amount :"<<endl;
	v[0].getAll();
    cout<<"\n";
	cout<<"Lowest Policy amount :"<<endl;
	v[n-1].getAll();
    cout<<"\n";
    cout<<"Displaying all the recors..."<<endl;
    for(int i=0; i<n; i++){
        v[i].display();
    }
    return 0;
}

