#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
        int count=0;
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
        int getCount();
        void addComplex(Complex c,Complex c1);
};

int Complex::getCount(){
     return count;
}

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
    c.display();
    cout<<c.getReal()<<endl;
    cout<<c.getImag()<<endl;
    res.addComplex(c,c1);
    cout<<c.getCount()<<endl;
    return 0;
}