#include<iostream>
using namespace std;

void areaCircum(float r){
    cout<<"Area: "<<3.14*r*r<<endl;
    cout<<"Circum: "<<2*3.14*r<<endl;
}
void areaPeri(float l,float b){
    cout<<"Area: "<<l*b<<endl;
    cout<<"Perimeter: "<<2*(l+b)<<endl;
}

int main(){
    int options;
    cout<<"Choose your options..."<<endl;
    cout<<"1 Circle"<<endl;
    cout<<"2 Rectangle"<<endl;
    cin>>options;
    if(options ==1){
        cout<<"Enter radius of circle"<<endl;
        float r;
        cin>>r;
        areaCircum(r);
    }else{
        cout<<"Enter length and breadth"<<endl;
        float l,b;
        cin>>l;
        cin>>b;
        areaPeri(l,b);
    }

    return 0;
}