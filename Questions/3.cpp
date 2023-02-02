#include<iostream>
using namespace std;

float max(float a,float b){
     if(a>b){
        return a;
     }
     else{
        return b;
     }
};

int main(){
    float a,b,*x,*y;
    cin>>a;
    cin>>b;
    x=&a;
    //cout<<x;
    y=&b;
    cout<<max(&x,&y)<<endl;
    //cout<<&x<<endl;
    //cout<<&y;
    return 0;
}