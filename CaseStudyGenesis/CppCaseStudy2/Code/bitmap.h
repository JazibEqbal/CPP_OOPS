#ifndef BITMAP_H
#define BITMAP_H

#include <iostream>

enum CONFIDENCE{
    HIGH,
    MEDIUM,
    LOW
};

enum HEALTH{
    GOOD,
    AVERAGE,
    POOR
};

class EvApp 
{
private:
    //data members unique to this class
    std::string evRegNumber;
    int evChargePct;
    int evtyrePressureLevel;
    bool isEvserviceDue;
    int evAvailableRange;
    HEALTH evBatteryHealth;

public:
    //Constructor
    EvApp(std::string regNumber,int charge,int pressure,bool isServiceDue, int availableRange, HEALTH batteryHealth );

    //Getter methods

    std::string getEvRegNumber();
    int getEvCharge();
    int getEvTyrePressure();
    bool getEvServiceDueStatus();
    int getEvAvailableRange();

    //method declarations
    bool isEvReady();
    CONFIDENCE tripConfidence(float distance);
    const char* findEvIssue();
    
    ~EvApp () {}
};

#endif