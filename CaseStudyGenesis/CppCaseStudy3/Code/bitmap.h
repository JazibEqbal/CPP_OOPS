#ifndef BITMAP_H
#define BITMAP_H

#include<iostream>
#include<vector>

//enum for vehicle type
enum VEHICLE_TYPE{
    PETROL,
    DIESEL,
    EV,
    HYBRID
};

//enum for vehicle brand
enum VEHICLE_BRAND{
    MARUTI,
    HONDA,
    TATA,
};

//class for Vehicle data
template <typename T,typename B>
class Vehicle
{
private:
    T vehicleId;
    B vehicleBrand;
    int vehicleRegistrationYear;
    int vehiclePrice;
    VEHICLE_TYPE vehicleType;
public:
    T getVehicleId();
    int getRegistrationYear();
    B   getVehicleBrand();
    int getVehiclePrice();
    VEHICLE_TYPE getVehicleType();
    Vehicle(T id,B brand,int year,int price,VEHICLE_TYPE type);
    ~Vehicle() {}
};

//Function to find registration year by ID
template<typename T,typename B>
int findRegistrationYearById(T id,std::vector<Vehicle<T,B>>& records);

//function to count vehicle of given brand in the records
template<typename T,typename B>
int countOfBrand(B brand,std::vector<Vehicle<T,B>>& records);

//find average price of vehicles with given ID values
template <typename T,typename B>
float averagePriceForGivenIds(std::vector<T>& ids,std::vector<Vehicle<T,B>>& records);

#include "bitmap.tpp"

#endif