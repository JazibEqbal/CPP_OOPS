#include<iostream>
using namespace std;

double max(double a,double b){
     if(a>b){
        return a;
     }
     else{
        return b;
     }
};

int main(){
    double a,b,*x,*y;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    x=&a;
    y=&b;
    cout<<"Address of maximum number is ";
    cout<<max(x,y)<<endl;
    return 0;
}