#include "bitmap.h"
//constructor for initialization
EvApp::EvApp(std::string regNumber,int charge,int pressure,bool isServiceDue, int availableRange,HEALTH batteryHealth ){
      evRegNumber = regNumber;
      evChargePct= charge;
      isEvserviceDue=isServiceDue;
      evtyrePressureLevel=pressure;
      evAvailableRange=availableRange;
      evBatteryHealth=batteryHealth;
}
//getter for different properties

std::string EvApp::getEvRegNumber(){
    return evRegNumber;
}
int EvApp::getEvCharge(){
    return evChargePct;
}
int EvApp::getEvTyrePressure(){
    return evtyrePressureLevel;
}
bool EvApp::getEvServiceDueStatus(){
    return isEvserviceDue;
}
int EvApp::getEvAvailableRange(){
    return evAvailableRange;
}
/*
    Method returns true or false or an exception of type const char* 
    as per Ev Ready section of the problem statement
*/

bool EvApp::isEvReady(){
    try{
     if((getEvCharge() >= 30) && (getEvTyrePressure() >= 70) && getEvServiceDueStatus() == 1){
         return true;
     }
     else if(getEvCharge() < 30){
        throw "Battery percentage is too low";
     } 
     else if(getEvTyrePressure() < 70){
        throw "Tyre pressure is not optimum";
     }
     else{
         throw "Car requires immediate servicing";
     }
    }
    catch(const char* msg){
        std::cout<<msg;
    }
}

/*
    Method returns a enum CONFIDENCE literal value or an exception of type const char* 
    as per Trip Confidence section of the problem statement
*/

CONFIDENCE EvApp::tripConfidence(float distance){
    float factor= distance / getEvAvailableRange();
    try{
        if((factor >1.0) || (getEvCharge() < 30)){
            throw "Distance is beyond of available range";
        }
        else if(getEvCharge() > 80 && factor <0.5){
             std::cout<<"HIGH";
        }
        else if((61 < getEvCharge() < 80) && factor < 0.5){
             std::cout<<"MEDIUM";
        }
        else if((30 < getEvCharge() <60) && factor < 0.5){
             std::cout<<"MEDIUM";
        }
        else if(( getEvCharge() > 80) && 0.5 < factor <0.74){
             std::cout<<"MEDIUM";
        }
        else if((61 < getEvCharge() <80) && (0.5 < factor <0.74)){
            std::cout<<"MEDIUM";
        }
        else if( (30 < getEvCharge() < 60) && (0.5 < factor < .74)){
            std::cout<<"LOW";
        }
        else if(getEvCharge() > 80 && (.75 < factor <1)){
            std::cout<<"LOW";
        }
        else if((61 < getEvCharge() < 80) && (.75 < factor <1)){
            std::cout<<"LOW";
        }
        else{
            std::cout<<"LOW";
        }
    }catch(const char *msg){
     std::cout<<msg;
    }
}

/*
    The method returns a string as per EV Issue section of the problem statement
*/

const char* EvApp::findEvIssue(){
       if(isEvReady() == 1){
        std::cout<<"No EV issue detected";
       }
       else if(getEvTyrePressure() < 70){
          std::cout<<"Possible integrity issue. Please get tyres checked";
       }
       else if((getEvCharge() < 30) && (evBatteryHealth == 2)){
        std::cout<<"Battery low. If battery is not charging, get battery replaced";
       }
       else {
        std::cout<<"Car requires immediate serving";
       }
}
