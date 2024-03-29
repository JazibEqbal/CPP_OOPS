#include<iostream>
using namespace std;


class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(){
            real = 0;
            imag = 0;
        }
        Complex(int real,int imag){
            this->real=real;
            this->imag=imag;
        }
        int getReal(){
            return real;
        }
        void setReal(int r){
            this->real=r;
        }
        int getImag(){
            return imag;
        }
        void setImag(int i){
            this->imag=i;
        }
        void display(){
            if(imag <0){
               cout<<real<<"-"<<imag<<"i"<<endl;
            }
            else{
                cout<<real<<"+"<<imag<<"i"<<endl;           
            }
        }
        void addComplex(Complex c,Complex c1);
};


void Complex::addComplex(Complex c,Complex c1){
       Complex res;
       res.real = c.real+ c1.real;
       res.imag= c.imag+c1.imag;
       cout<<"Addition of two complex numbers is ";
       if(imag <0){
            cout<<res.real<<"-"<<res.imag<<"i"<<endl;
       }else{
            cout<<res.real<<"+"<<res.imag<<"i"<<endl;
       }
}
int main(){
    Complex c,c1,res;
    c.setReal(23);
    c.setImag(3);
    c1.setReal(3);
    c1.setImag(7);
    cout<<"Complex number 1 is ";
    c.display();
    cout<<"Complex number 2 is ";
    c1.display();
    res.addComplex(c,c1);
    return 0;
}