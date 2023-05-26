#include "bitmap.h"

template<typename T,typename B>
Vehicle<T,B>::Vehicle(T id,B brand,int year,int price,TYPE type){
    
}

template<typename T,typename B>
int findRegistrationYearById(T id,Vehicle<T,B>& records){
   
}

template<typename T,typename B>
int countOfBrand(BRAND brand,Vehicle<T,B>& records){
  
}

template <typename T,typename B>
float averagePriceForGivenIds(std::vector<T> ids,Vehicle<T,B>& records){
   
}

//Getters
template <typename T,typename B>
T Vehicle<T,B>::getVehicleId();

template <typename T,typename B>
int Vehicle<T,B>::getRegistrationYear();

template <typename T,typename B>
B   Vehicle<T,B>::getVehicleBrand();

template <typename T,typename B>
int Vehicle<T,B>::getVehiclePrice();

template <typename T,typename B>
VEHICLE_TYPE Vehicle<T,B>::getVehicleType();

template<typename T,typename B>
Vehicle<T,B>::Vehicle(T id,B brand,int year,int price,VEHICLE_TYPE type);
