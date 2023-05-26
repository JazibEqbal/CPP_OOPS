#include<iostream>
using namespace std;

class Complex{
    private:
       int real;
       int imaginary;
    public:
       Complex(){
           real = 0;
           imaginary =0;
       }
       Complex(int r,int i){
        this->real = r;
        this->imaginary = i;
       }
       int getReal(){
        return real;
       }
       int getImaginary(){
        return imaginary;
       }
       void setReal(int real){
        this->real = real;
       }
}

int main(){

    return 0;
}