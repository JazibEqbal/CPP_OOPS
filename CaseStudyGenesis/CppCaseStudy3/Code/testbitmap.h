#include "bitmap.h"
#include <cxxtest/TestSuite.h>
class SampleTestSuite : public CxxTest::TestSuite
{
public:
//Validate Vehicle object
    void testOne( void )
    {
        Vehicle<std::string,std::string> v1("MH-1","TATA",2018,10,PETROL);
        TS_ASSERT(v1.getVehicleId() == "MH-1");
        TS_ASSERT(v1.getRegistrationYear() == 2018 );
        TS_ASSERT(v1.getVehicleBrand() == "TATA");
        TS_ASSERT(v1.getVehiclePrice() == 10);
        TS_ASSERT(v1.getVehicleType() == PETROL);

    }

    //Validate findRegistratonYearById functionality
    void testTwo( void )
    {
        Vehicle<std::string,std::string> v1("MH-1","TATA",2018,10,PETROL);
        Vehicle<std::string,std::string> v2( "MH-2","SKODA",2016,12,PETROL);
        Vehicle<std::string,std::string> v3( "MH-3","TATA",2018,15,EV);
        Vehicle<std::string,std::string> v4( "MH-4","MARUTI",2018,8,PETROL);
        Vehicle<std::string,std::string> v5( "MH-5","HONDA",2017,11,DIESEL);

        std::vector<Vehicle<std::string,std::string>> records;

        records.push_back(v1);
        records.push_back(v2);
        records.push_back(v3);
        records.push_back(v4);
        records.push_back(v5);

        int year = findRegistrationYearById<std::string,std::string>("MH-3",records);
        TS_ASSERT(  year==2018  );
        TS_TRACE("testTwo");

    }

    //Validate countOfBrand functionality
    void testThree( void )
    {
        Vehicle<int,std::string> v1( 1,"TATA",2018,10,PETROL);
        Vehicle<int,std::string> v2( 2,"MARUTI",2016,12,PETROL);
        Vehicle<int,std::string> v3( 3,"TATA",2018,15,EV);
        Vehicle<int,std::string> v4( 4,"MARUTI",2018,8,PETROL);
        Vehicle<int,std::string> v5( 5,"HONDA",2017,11,DIESEL);

        std::vector<Vehicle<int,std::string>> records;

        records.push_back(v1);
        records.push_back(v2);
        records.push_back(v3);
        records.push_back(v4);
        records.push_back(v5);
        int count=countOfBrand<int,std::string>("TATA",records);
        TS_ASSERT(  count == 2  );
        TS_TRACE("testThree");
    }

    // //Validate averagePriceForGivenIds functionality
    void testFour( void )
    {

        Vehicle<int,VEHICLE_BRAND> v1( 1,TATA,2018,10,PETROL);
        Vehicle<int,VEHICLE_BRAND> v2( 2,MARUTI,2016,12,PETROL);
        Vehicle<int,VEHICLE_BRAND> v3( 3,TATA,2018,15,EV);
        Vehicle<int,VEHICLE_BRAND> v4( 4,MARUTI,2018,8,PETROL);
        Vehicle<int,VEHICLE_BRAND> v5( 5,HONDA,2017,11,DIESEL);

        std::vector<Vehicle<int,VEHICLE_BRAND>> records;

        records.push_back(v1);
        records.push_back(v2);
        records.push_back(v3);
        records.push_back(v4);
        records.push_back(v5);

        std::vector<int> ids;
        ids.push_back(11);
        ids.push_back(14);
        ids.push_back(15);

        char valueString[8];

        char ansString[8];


        float ans =averagePriceForGivenIds<int,VEHICLE_BRAND>(ids,records);

        //convert value to a string with fixed precision
        sprintf(valueString,"%.2f",0.0f);

        //convert returned answer to same precision string
        sprintf(ansString,"%.2f",ans);
        //assert for string equality
        TS_ASSERT(CxxTest::stringsEqual(ansString,valueString));

        TS_TRACE("testFour");
    }


};

