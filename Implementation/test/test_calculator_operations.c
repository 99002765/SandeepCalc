#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_sqrt(void);
void test_permutation(void);
void test_combination(void);


int main() {
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "modulus", test_modulus);
  CU_add_test(suite, "sqrt", test_sqrt);
  CU_add_test(suite, "permutation", test_permutation);
  CU_add_test(suite, "combination", test_combination);
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return 0;
}
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
void test_multiply(void) {
  CU_ASSERT(84 == multiply(14, 6));
 }
void test_divide(void) {
  CU_ASSERT(3 == divide(51, 17));
 }
void test_modulus(void) {
  CU_ASSERT(2 == modulus(14, 3));
 }
void test_sqrt(void) {
  CU_ASSERT(9 == sqrt(81));
 }
void test_permutation(void) {
  CU_ASSERT(20 == permutation(5, 2));
 }
void test_combination(void) {
  CU_ASSERT(10 == combination(5, 2));
 }
