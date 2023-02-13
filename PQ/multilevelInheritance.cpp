#include<iostream>
using namespace std;

class A{
    int x;
    public:
       A(){
        cout<<"A default"<<endl;
       }
       A(int p):x(p){}
       void printx(){
        cout<<"A"<<endl;
       }
};

class B:public A{
    int y;
    public:
        B(){
            cout<<"B default"<<endl;
        }
        B(int p,int q):A(p),y(q){}
        void printxy(){
            printx();
            cout<<y<<endl;
        }
};

class C: public B{
    int z;
    public:
       C(){
        cout<<"C default"<<endl;
       }
       C(int p,int q,int r):B(p,q),z(r){}
       void printxyzz(){
        printxy();
        cout<<z<<endl;
       }
};


int main(){
    B b;
    C c1(5,10,15);
    c1.printxyzz();
    return 0;
}