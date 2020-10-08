#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_sqrt(void);
void test_permutation(void);
void test_combination(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "modulus", test_modulus);
  CU_add_test(suite, "sqrt", test_sqrt);
  CU_add_test(suite, "permutation", test_permutation);
  CU_add_test(suite, "combination", test_combination);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(25 == add(15, 10));
  
  /* Dummy fail*/
  CU_ASSERT(10 == add(4, 5));
}

void test_subtract(void) {
  CU_ASSERT(-7 == subtract(5, 12));
  
  /* Dummy fail*/
  CU_ASSERT(20 == subtract(30, 11));
}
void test_subtract(void) {
  CU_ASSERT(-7 == subtract(5, 12));
 }
 void test_multiply(void) {
  CU_ASSERT(84 == multiply(14, 6));
 }
