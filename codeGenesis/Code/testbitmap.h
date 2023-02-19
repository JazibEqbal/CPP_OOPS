
#include "bitmap.h"
#include <cxxtest/TestSuite.h>
class SampleTestSuite : public CxxTest::TestSuite
{
public:
//Validate EvApp object
    void testOne( void )
    {
        EvApp ev1("LH1623",80,80,true,250,HEALTH::GOOD);

        TS_ASSERT(ev1.getEvRegNumber() == "LH1623");
        TS_ASSERT(ev1.getEvCharge() == 80 );
        TS_ASSERT(ev1.getEvTyrePressure() == 80);
        TS_ASSERT(ev1.getEvServiceDueStatus());
        TS_ASSERT(ev1.getEvAvailableRange() == 250);

    }

    //Validate isEvReady functionality
    void testTwo( void )
    {

        EvApp ev1("LH1623",70,80,false,250,HEALTH::GOOD);
        
          //true expected as all criteria for Ev Ready is satisfied.
          TS_ASSERT(ev1.isEvReady() );
          TS_TRACE("testTwo");

    }

    //Validate isEvReady functionality
    void testThree( void )
    {

        EvApp ev1("LH1623",86,50,true,250,HEALTH::GOOD);
        //Exception for tyre pressure is expected
          TS_ASSERT_THROWS_ASSERT(ev1.isEvReady(), const char* e,TS_ASSERT_EQUALS(  CxxTest::stringsEqual("Tyre pressure is not optimum",e),1  ) );
          TS_TRACE("testThree");
    }

    //Validate tripConfidence functionality
    void testFour( void )
    {

        EvApp ev1("LH1623",96,65,false,250,HEALTH::GOOD);
        //HIGH expected as battery is over 65 and distance (225) is 90 percent of available range;
        TS_ASSERT(ev1.tripConfidence(225) == CONFIDENCE::LOW);
        TS_TRACE("testFour");
    }
    
   
    //Validate tripConfidence functionality
    void testFive( void )
    {

        EvApp ev1("LH1623",27,80,false,250,HEALTH::GOOD);
        //Exception expected as distance(260) is beyond available range;
        TS_ASSERT_THROWS_ASSERT(ev1.tripConfidence(100), const char* e,
           TS_ASSERT_EQUALS(  CxxTest::stringsEqual("Battery percentage is too low",e)  ,1 ));
        TS_TRACE("testFive");
    }

    //Validate findEvIssue functionality
    void testSix( void )
    {

        EvApp ev1("LH1623",34,85,false,250,HEALTH::AVERAGE);
        const char* ans = ev1.findEvIssue();
        const char* msg = "No EV issue detected";
        TS_ASSERT(CxxTest::stringsEqual(ans,msg))
        TS_TRACE("testSix");
    }

};
