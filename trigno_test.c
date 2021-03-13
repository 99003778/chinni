#include "unity.h"
#include "main.h"


void setUp(){}

void tearDown(){}

//Test Case2 For Trignometry
void test_Sin_func1(void);
void test_Cos_func1(void);
void test_Tan_func1(void);
void test_Cosec_func1(void);
void test_Sec_func1(void);
void test_Cot_func1(void);
//Test Case2 For Trignometry
void test_Sin_func2(void);
void test_Cos_func2(void);
void test_Tan_func2(void);
void test_Cosec_func2(void);
void test_Sec_func2(void);
void test_Cot_func2(void);
//Test Case3 For Trignometry
void test_Sin_func3(void);
void test_Cos_func3(void);
void test_Tan_func3(void);
void test_Cosec_func3(void);
void test_Sec_func3(void);
void test_Cot_func3(void);


void test_Sin_func1(void)
{
     TEST_ASSERT_EQUAL(0.5,Sin_func(30));
}

void test_Cos_func1(void)
{
     TEST_ASSERT_EQUAL(0.5,Cos_func(30));
}
void test_Tan_func1(void)
{
      TEST_ASSERT_EQUAL(0.5,Tan_func(30));
}
void test_Cosec_func1(void)
{
      TEST_ASSERT_EQUAL(0.5,Cosec_func(30));
}
void test_Sec_func1(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_func(30));
}
void test_Cot_func1(void)
{
      TEST_ASSERT_EQUAL(0.5,Cot_func(30));
}

void test_Sin_func2(void)
{
     TEST_ASSERT_EQUAL(0.5,Sin_func(30));
}

void test_Cos_func2(void)
{
     TEST_ASSERT_EQUAL(0.5,Cos_func(30));
}
void test_Tan_func2(void)
{
      TEST_ASSERT_EQUAL(0.5,Tan_func(30));
}
void test_Cosec_func2(void)
{
      TEST_ASSERT_EQUAL(0.5,Cosec_func(30));
}
void test_Sec_func2(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_func(30));
}
void test_Cot_func2(void)
{
      TEST_ASSERT_EQUAL(0.56,Cot_func(30));
}


void test_Sin_func3(void)
{
     TEST_ASSERT_EQUAL(0.5,Sin_func(30));
}

void test_Cos_func3(void)
{
     TEST_ASSERT_EQUAL(0.5,Cos_func(30));
}
void test_Tan_func3(void)
{
      TEST_ASSERT_EQUAL(0.5,Tan_func(30));
}
void test_Cosec_func3(void)
{
      TEST_ASSERT_EQUAL(0.5,Cosec_func(30));
}
void test_Sec_func3(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_func(30));
}
void test_Cot_func3(void)
{
      TEST_ASSERT_EQUAL(0.5,Cot_func(30));
}



// test case for cube root

void test_cube_root(void)
{
    TEST_ASSERT_EQUAL(225,cube_root(15));
}


int main(void)
{ 
  UNITY_BEGIN();
  
    RUN_TEST(test_Sin_func1);
    RUN_TEST(test_Cos_func1);
    RUN_TEST(test_Cosec_func1);
    RUN_TEST(test_Sec_func1);
    RUN_TEST(test_Tan_func1);
    RUN_TEST(test_Cot_func1);

    RUN_TEST(test_Sin_func2);
    RUN_TEST(test_Cos_func2);
    RUN_TEST(test_Cosec_func2);
    RUN_TEST(test_Sec_func2);
    RUN_TEST(test_Tan_func2);
    RUN_TEST(test_Cot_func2);
    
    RUN_TEST(test_Sin_func3);
    RUN_TEST(test_Cos_func3);
    RUN_TEST(test_Cosec_func3);
    RUN_TEST(test_Sec_func3);
    RUN_TEST(test_Tan_func3);
    RUN_TEST(test_Cot_func3);
    
    RUN_TEST(test_cube_root);
    
  return UNITY_END();
}