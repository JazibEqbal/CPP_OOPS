#include<bits/stdc++.h>
using namespace std;

class Complex{
 private:
    int a,b;
 public:
    Complex();
    Complex(int,int);
    Complex operator+(Complex&);
    Complex operator-(Complex&);
    Complex operator-();
    Complex operator++();
    Complex operator++(int);
    void display();
};

Complex::Complex(){
    a=1;
    b=1;
}
Complex::Complex(int a,int b){
    this->a=a;
    this->b=b;
}
Complex Complex::operator+(Complex &c){
    Complex r;
    r.a=a+c.a;
    r.b=b+c.b;
    return r;
}
Complex Complex::operator-(Complex &c){
    Complex r;
    r.a=a-c.a;
    r.b=b-c.b;
    return r;
}
Complex Complex:: operator-(){
    Complex r;
    r.a=-a;
    r.b=-b;
    return r;
}
Complex Complex::operator++(){
    Complex r;
    r.a=++a;
    r.b=++b;
    return r;
}
Complex Complex::operator++(int){
    Complex r;
    r.a=a++;
    r.b=b++;
    return r;
}
void Complex::display(){
    cout<<a<<" "<<b<<endl;
}

int main(){
    Complex c1(12,13),c2(2,3),c3,c4;
    c3=c1+c2;
    cout<<"Overloading Operator + "<<endl;
    c3.display();
    c3=c1-c2;
    cout<<"Overloading Operator - "<<endl;
    c3.display();
    c2=-c1;
    cout<<"Overloading Operator a=-a "<<endl;
    c2.display();
    c4=++c1;
    cout<<"Overloading Operator ++ pre "<<endl;
    c4.display();
    c4=c1++;
    cout<<"Overloading Operator post ++ "<<endl;
    c4.display();
}
