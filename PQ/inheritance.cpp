#include<iostream>
using namespace std;

class A{
    int x;
  public:
     A(){
        cout<<"A def"<<endl;
     }
     A(int p):x(p){
        this->x = p;
     }
     void printx(){
        cout<<"A"<<endl;
     }
};

class B:public A{
    int y;
    public:
       B(){
        cout<<"b def"<<endl;
       }
       B(int p,int q):A(p),y(q){}
       void printxy(){
        printx();
        cout<<y<<endl;
       }
};

int main(){
    B b;
    B b1(10,20);
    b1.printxy();
    return 0;
}