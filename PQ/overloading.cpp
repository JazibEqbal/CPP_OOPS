#include<iostream>
using namespace std;

class Distance{
    private:
       int feet;
       int inches;
    public:
       Distance():feet(0),inches(0){}
       Distance(int f,int i):feet(f),inches(i){}
       void displayDistance();
       Distance operator -();
       bool operator < (Distance &);
};

void Distance::displayDistance(){
    cout<<"Feet "<<feet<<" "<<"Inches "<<inches<<endl;
}

Distance Distance::operator-(){
    feet= -feet;
    inches= -inches;
    cout<<feet;
    return Distance(feet,inches);
}
bool Distance::operator <(Distance &d){
    if(feet <d.feet){
        return true;
    }
    if(feet == d.feet && inches < d.inches){
        return true;
    }
    return false;
}

int main(){
    Distance d(11,12),d1(5,11);
    //d=-d;
    if(d<d1){
        cout<<"d is less"<<endl;
    }else{
        cout<<"d1 is less"<<endl;
    }
    return 0;
}