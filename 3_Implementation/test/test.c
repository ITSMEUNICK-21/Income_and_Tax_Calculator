//Revision : 30 March 2022
//By HNS

#include "unity.h"
#include "all_functions.h"

// Old Regime main-function test prototype

void test_oldreg_60less(void);

void test_oldreg_60more(void);

void test_oldreg_80more(void);

// New Regime main-function test prototype

void test_newreg_all(void);

// New Regime sub-function test prototype (based on tax bracket)

void test_newreg_2andhalf_to_5lpa_all(void);
void test_newreg_5_to_7andhalflpa_all(void);
void test_newreg_7andhalf_to_10lpa_all(void);
void test_newreg_10_to_12andhalflpa_all(void);
void test_newreg_12andhalf_to_15lpa_all(void);
void test_newreg_above15lpa_all(void);

// Old Regime sub-function test prototype for age less than 60 (based on tax bracket)

void test_oldreg_2andhalf_to_5lpa(void);
void test_oldreg_5_to_10lpa(void);
void test_oldreg_above10lpa(void);

// Old Regime sub-function test prototype for age more than 60 and less than 80 (based on tax bracket)

void test_oldreg_3_to_5lpa_60more(void);
void test_oldreg_5_to_10lpa_60more(void);
void test_oldreg_above10lpa_60more(void);

// Old Regime sub-function test prototype for age more than 80 (based on tax bracket)

void test_oldreg_5_to_10lpa_80more(void);
void test_oldreg_above10lpa_80more(void);


void setUp (void) {}

void tearDown (void) {}

int main()
{
    UNITY_BEGIN();

    // Old Regime main-function tests

    RUN_TEST(test_oldreg_60less);
    RUN_TEST(test_oldreg_60more);
    RUN_TEST(test_oldreg_80more);

    // New Regime main-function tests
    RUN_TEST(test_newreg_all);
    
    
    // New Regime sub-function tests (based on tax bracket)

    RUN_TEST(test_newreg_2andhalf_to_5lpa_all);
    RUN_TEST(test_newreg_5_to_7andhalflpa_all);
    RUN_TEST(test_newreg_7andhalf_to_10lpa_all);
    RUN_TEST(test_newreg_10_to_12andhalflpa_all);
    RUN_TEST(test_newreg_12andhalf_to_15lpa_all);
    RUN_TEST(test_newreg_above15lpa_all);
    
    // Old Regime sub-function tests for age less than 60 (based on tax bracket)

    RUN_TEST(test_oldreg_2andhalf_to_5lpa);
    RUN_TEST(test_oldreg_5_to_10lpa);
    RUN_TEST(test_oldreg_above10lpa);

    // Old Regime sub-function tests for age more than 60 and less than 80 (based on tax bracket)

    RUN_TEST(test_oldreg_3_to_5lpa_60more);
    RUN_TEST(test_oldreg_5_to_10lpa_60more);
    RUN_TEST(test_oldreg_above10lpa_60more);

    // Old Regime sub-function tests for age more than 80 (based on tax bracket)

    RUN_TEST(test_oldreg_5_to_10lpa_80more);
    RUN_TEST(test_oldreg_above10lpa_80more); 

    return UNITY_END();
}

// Old Regime main-function test prototype

void test_oldreg_60less(void)
{
    TEST_ASSERT_EQUAL(32500, oldreg_60less(600000));
}

void test_oldreg_60more(void)
{
    TEST_ASSERT_EQUAL(30000, oldreg_60more(600000));
}

void test_oldreg_80more(void)
{
    TEST_ASSERT_EQUAL(20000, oldreg_80more(600000));
}

// New Regime main-function test prototype

void test_newreg_all(void)
{
    TEST_ASSERT_EQUAL(22500, newreg_all(600000));
}


// New Regime sub-function test definition (based on tax bracket)

void test_newreg_2andhalf_to_5lpa_all(void)
{
    TEST_ASSERT_EQUAL(7500, newreg_2andhalf_to_5lpa_all(400000));
}

void test_newreg_5_to_7andhalflpa_all(void)
{
    TEST_ASSERT_EQUAL(22500, newreg_5_to_7andhalflpa_all(600000));
}

void test_newreg_7andhalf_to_10lpa_all(void)
{
    TEST_ASSERT_EQUAL(45000, newreg_7andhalf_to_10lpa_all(800000));
}

void test_newreg_10_to_12andhalflpa_all(void)
{
    TEST_ASSERT_EQUAL(95000, newreg_10_to_12andhalflpa_all(1100000));
}

void test_newreg_12andhalf_to_15lpa_all(void)
{
    TEST_ASSERT_EQUAL(137500, newreg_12andhalf_to_15lpa_all(1300000));
}

void test_newreg_above15lpa_all(void)
{
    TEST_ASSERT_EQUAL(217500, newreg_above15lpa_all(1600000));
}

// Old Regime sub-function test definition for age less than 60 (based on tax bracket)

void test_oldreg_2andhalf_to_5lpa(void)
{
    TEST_ASSERT_EQUAL(7500, oldreg_2andhalf_to_5lpa(400000));
}

void test_oldreg_5_to_10lpa(void)
{
    TEST_ASSERT_EQUAL(32500, oldreg_5_to_10lpa(600000));
}

void test_oldreg_above10lpa(void)
{
    TEST_ASSERT_EQUAL(142500, oldreg_above10lpa(1100000));
}

// Old Regime sub-function test definition for age more than 60 and less than 80 (based on tax bracket)

void test_oldreg_3_to_5lpa_60more(void)
{
    TEST_ASSERT_EQUAL(5000, oldreg_3_to_5lpa_60more(400000));
}

void test_oldreg_5_to_10lpa_60more(void)
{
    TEST_ASSERT_EQUAL(30000, oldreg_5_to_10lpa_60more(600000));
}

void test_oldreg_above10lpa_60more(void)
{
    TEST_ASSERT_EQUAL(140000, oldreg_above10lpa_60more(1100000));
}

// Old Regime sub-function test definition for age more than 80 (based on tax bracket)

void test_oldreg_5_to_10lpa_80more(void)
{
    TEST_ASSERT_EQUAL(20000, oldreg_5_to_10lpa_80more(600000));
}

void test_oldreg_above10lpa_80more(void)
{
    TEST_ASSERT_EQUAL(130000, oldreg_above10lpa_80more(1100000));
}