#include "bitmap.h"
#include <cxxtest/TestSuite.h>
class SampleTestSuite : public CxxTest::TestSuite
{
public:
//Validate Vehicle object
    void testOne( void )
    {
        Vehicle<int,VEHICLE_BRAND> v1(1,TATA,2018,10,PETROL);
        TS_ASSERT(v1.getVehicleId() == 1);
        TS_ASSERT(v1.getRegistrationYear() == 2018 );
        TS_ASSERT(v1.getVehicleBrand() == TATA);
        TS_ASSERT(v1.getVehiclePrice() == 10);
        TS_ASSERT(v1.getVehicleType() == PETROL);

    }

    //Validate findRegistratonYearById functionality
    void testTwo( void )
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

        int year = findRegistrationYearById<int,VEHICLE_BRAND>(3,records);
        TS_ASSERT(  year==2018  );
        TS_TRACE("testTwo");

    }

    //Validate countOfBrand functionality
    void testThree( void )
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
        
        int count=countOfBrand<int,VEHICLE_BRAND>(TATA,records);
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
        ids.push_back(1);
        ids.push_back(4);
        ids.push_back(5);

        char valueString[8];

        char ansString[8];


        float ans =averagePriceForGivenIds<int,VEHICLE_BRAND>(ids,records);

        //convert value to a string with fixed precision
        sprintf(valueString,"%.2f",9.67f);

        //convert returned answer to same precision string
        sprintf(ansString,"%.2f",ans);
        //assert for string equality
        TS_ASSERT(CxxTest::stringsEqual(ansString,valueString));
        TS_TRACE("testFour");
    }


};
