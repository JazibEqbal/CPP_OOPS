
#include "bitmap.h"
#include <cxxtest/TestSuite.h>
class SampleTestSuite : public CxxTest::TestSuite
{
public:
//Validate EvApp object
    void testOne( void )
    {
        EvApp ev1("LH1623",27,80,false,250,HEALTH::GOOD);

        TS_ASSERT(ev1.getEvRegNumber() == "LH1623");
        TS_ASSERT(ev1.getEvCharge() == 27 );
        TS_ASSERT(ev1.getEvTyrePressure() == 80);
        TS_ASSERT(!ev1.getEvServiceDueStatus());
        TS_ASSERT(ev1.getEvAvailableRange() == 250);

    }

    //Validate isEvReady functionality
    void testTwo( void )
    {

        EvApp ev1("LH1623",27,80,false,250,HEALTH::AVERAGE);
        
          //Exception for Low battery expected
          TS_ASSERT_THROWS_ASSERT(ev1.isEvReady(), const char* e,TS_ASSERT_EQUALS(  CxxTest::stringsEqual("Battery percentage is too low",e),1  ) );
          TS_TRACE("testTwo");

    }

    //Validate isEvReady functionality
    void testThree( void )
    {

        EvApp ev1("LH1623",56,80,true,250,HEALTH::AVERAGE);
        //Exception for servicing required is expected
          TS_ASSERT_THROWS_ASSERT(ev1.isEvReady(), const char* e,TS_ASSERT_EQUALS(  CxxTest::stringsEqual("Car requires immediate servicing",e),1  ) );
          TS_TRACE("testThree");
    }

    //Validate tripConfidence functionality
    void testFour( void )
    {

        EvApp ev1("LH1623",96,80,false,250,HEALTH::AVERAGE);
        //HIGH expected as battery is over 80 and distance (25) is 10 percent of available range;
        TS_ASSERT(ev1.tripConfidence(25) == CONFIDENCE::HIGH);
        TS_TRACE("testFour");
    }
    
   
    //Validate tripConfidence functionality
    void testFive( void )
    {

        EvApp ev1("LH1623",96,80,false,250,HEALTH::AVERAGE);
        //Exception expected as distance(260) is beyond available range;
        TS_ASSERT_THROWS_ASSERT(ev1.tripConfidence(260.0), const char* e,
           TS_ASSERT_EQUALS(  CxxTest::stringsEqual("Distance is beyond of available range",e)  ,1 ));
        TS_TRACE("testFive");
    }

      //Validate findEvIssue functionality
    void testSix( void )
    {

        EvApp ev1("LH1623",34,66,false,250,HEALTH::AVERAGE);
        const char* ans = ev1.findEvIssue();
        const char* msg = "Possible integrity issue. Please get tyres checked";
        TS_ASSERT(CxxTest::stringsEqual(ans,msg))
        TS_TRACE("testSix");
    }

};
