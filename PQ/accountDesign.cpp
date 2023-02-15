#include<bits/stdc++.h>
using namespace std;

class Book{
    private:
       int n=100;
       int id=rand()%n;
       string name;
       double balance;
    public:
       static int min_balance;
       Book():name(""),balance(0){}
       Book(string n,double bal):name(n),balance(bal){}
       Book(Book &p){
        id=p.id;
        name=p.name;
        balance=p.balance;
       }
       void display();
       void credit(double amount);
       void debit(double amount);
       bool operator<(Book &b){
           if(balance<b.balance){
            return true;
           }
           else{
            return false;
           }
       };
       bool operator>(Book &b){
        if(balance>b.balance){
            return true;
           }
           else{
            return false;
           }
       }
       bool operator==(Book &b){
        if(balance==b.balance){
            return true;
        }
       }
       //getterrs
       double getBalance(){
        return this->balance;
       }
       int getId(){
        return this->id;
       }
       string getName(){
        return name;
       }
};

int Book::min_balance=100;

void Book::display(){
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
}
void Book::credit(double amount){
    balance += amount;
}
void Book::debit(double amount){
    if(balance > min_balance && amount <=10000){
        balance -= amount;
    }else{
        cout<<"Please "<<endl;
    }
}

bool compareIdName(Book b1,Book b2){
     if((b1.getId() > b2.getId()) || (b1.getName() > b2.getName())){
        return true;
     }
     else{
        return false;
     }
};
bool compareBalance(Book b1,Book b2){
    if(b1.getBalance() > b2.getBalance()){
        return true;
    }
    else{
        return false;
    }
};



int main(){
    Book b1("aaaaaa",300),b2("abbbaa",500);
    //Book b2(20,"Jajaj",2400);
    //cout<<compareBalance(b1,b2);
    //b1.debit(10000);
    //Book b(b1);
    // Book b,c;
    //b.display();
    //c.display();
    if(b1>b2){
        cout<<"Yes";
    }
    else{
        cout<<"gand";
    }
    return 0;
}
