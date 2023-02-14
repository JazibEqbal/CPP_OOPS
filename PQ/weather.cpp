#include<iostream>
using namespace std;

class Weather{
    private:
       float temperature;
       int city_code;
       string city_name;
    public:
      Weather():temperature(){}
      Weather(float temp,int code,string name):
      temperature(temp),city_code(code),city_name(name){}
       float humdidity();
       void setCityCode(int);
       void setCityName(string);
       int getCityCode();
       string getCityName();
       float getTemperature();
       void display();
};
float Weather::humdidity(){
    int humidity;
    if(temperature > 30){
        humidity = 75;
    }else if(temperature <30 && temperature > 15){
        humidity = 40;
    }
    else{
        humidity = 10;
    }
    return humidity;
}
void Weather::setCityCode(int code){
     this->city_code=code;
}
void Weather::setCityName(string name){
     this->city_name=name;
}
int Weather::getCityCode(){
    return this->city_code;
}
string Weather::getCityName(){
    return this->city_name;
}
float Weather::getTemperature(){
    return this->temperature;
}

void Weather::display(){
    cout<<"Temperature "<<temperature<<endl;
    cout<<"Humidity "<<humdidity()<<"%"<<endl;
    cout<<"City Name "<<getCityName()<<endl;
    cout<<"City Code "<<getCityCode()<<endl;
}

int main(){
    Weather w(45,123,"Gaya");
    w.setCityCode(213);
    w.display();
    cout<<w.getTemperature()<<endl;
    return 0;
}