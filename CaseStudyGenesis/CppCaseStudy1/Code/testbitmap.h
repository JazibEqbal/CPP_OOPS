#include "bitmap.h"
#include <cxxtest/TestSuite.h>

//Data records

data d21=
{
    {"SaleUnits", 10000},
    {"Price", 45000},
    {"Efficiency", -1},
    {"Horsepower", 140}

};

data d22 =
{
    {"SaleUnits", 10000},
    {"Price", -1},
    {"Efficiency", 12},
    {"Horsepower", -1}

};

data d23 =
{
    {"SaleUnits", 20000},
    {"Price", 35000},
    {"Efficiency", 14},
    {"Horsepower", 154}

};

data d24 =
{
    {"SaleUnits", 17000},
    {"Price", 45000},
    {"Efficiency", -1},
    {"Horsepower", 140}

};


data d25 =
{
    {"SaleUnits", 21000},
    {"Price", 40000},
    {"Efficiency", 8},
    {"HorsePower", 145}

};

std::vector <data> records2 = {d21,d22,d23,d24,d25};

class SampleTestSuite : public CxxTest::TestSuite
{
    public:

        //Test AverageCarPrice functionality
        void testOne( void )
        {
            float ans = AverageCarPrice (records2);
            TS_ASSERT( ans == 41250 );
            TS_TRACE("testOne");
        }

        //Test MaxHorsePower functionality
        void testTwo( void )
        {
            int ans = MaxHorsepower (records2);
            TS_ASSERT( ans == 154 );
            TS_TRACE("testTwo");
        }

        //Test LowestEfficiency by passing all records
        void testThree( void )
        {
            int ans = FindLowestEfficiency(records2);
            TS_ASSERT( ans == 8 );
            TS_TRACE("testThree");
        }

    
    
};
