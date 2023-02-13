#include<iostream>
using namespace std;

class A{
    int x;
    public:
       A(){
        cout<<"A default"<<endl;
       }
       A(int p):x(p){
        x=p;
       }
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
        B(int p):y(p){}
        void printy(){
            cout<<y<<endl;
        }
};
class C:public A,public B{
    int z;
    public: 
        C(){
            cout<<"C default"<<endl;
        }
        C(int p,int q,int r):A(p),B(q),z(r){}
        void printxyz(){
            printx();
            printy();
            cout<<z<<endl;
        }
};

int main(){
    C c(10,20,30);
    c.printxyz();
    return 0;
}