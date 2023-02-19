#include <iostream>
using namespace std;

enum HEALTH{
    GOOD,
    AVERAGE,
    POOR
};
class EvApp{
   private:
      string evRegNumber;
      int evChargePct;
      int evtyrePressureLevel;
      bool isEvserviceDue;
      int evAvailableRange;
      HEALTH evBatteryHealth;
   public:
      EvApp(string regNumber,int charge,int pressure,bool isServiceDue, int availableRange, HEALTH batteryHealth);
      void display();
};
EvApp::EvApp(string regNumber,int charge,int pressure,bool isServiceDue, int availableRange,HEALTH batteryHealth ){
      evRegNumber = regNumber;
      evChargePct= charge;
      isEvserviceDue=isServiceDue;
      evtyrePressureLevel=pressure;
      evAvailableRange=availableRange;
      evBatteryHealth=batteryHealth;
}
void EvApp::display(){
    cout<<evRegNumber<<endl;
    cout<<evChargePct<<endl;
    cout<<evtyrePressureLevel<<endl;
    cout<<isEvserviceDue<<endl;
    cout<<evAvailableRange<<endl;
    cout<<evBatteryHealth<<endl;
}
int main() {
    // Write C++ code here
    EvApp ev1("LH1623",80,80,true,250,HEALTH::POOR);
    ev1.display();
    return 0;
}