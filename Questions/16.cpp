#include<iostream>
using namespace std;

static int count=0;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(){
            real = 0;
            imag = 0;
            count++;
        }
        Complex(int real,int imag){
            this->real=real;
            this->imag=imag;
            count++;
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

static int getCount(){
     return count;
}

int main(){
    Complex c,c1;
    c.setReal(23);
    c.setImag(3);
    c1.setReal(3);
    c1.setImag(7);
    cout<<"Complex number 1 is ";
    c.display();
    cout<<"Complex number 2 is ";
    c1.display();
    cout<<"Number of objects created is "<<getCount()<<endl;
    return 0;
}