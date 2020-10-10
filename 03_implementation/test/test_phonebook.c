#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>


#include <phone_book.h>
#define PROJECT_NAME "phonebook-management"



void test_password(void);



int main() {
  
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);

  
  
 
  
  CU_add_test(suite, "password", test_password);
  


  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  
  CU_basic_run_tests();
  
  
  CU_cleanup_registry();

  return 0;
}

void test_password(void){
 CU_ASSERT(1 == password("pass"));
 CU_ASSERT(1 == password("wrong"));//dummy fail case
}
