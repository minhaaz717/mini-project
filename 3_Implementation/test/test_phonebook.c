#include "../unity/unity.h"
#include "../3_Implementation/inc/phone-book.h"
#define project_name "miniproject"
void test_addContact(void);
void test_delete(void);
void test_displayBook(void);
void test_search(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
void test_addContact(void){
    int newContact = {"Add_user", "12345"};
    TEST_ASSERT_EQUAL(0, addContact(&newContact));
}
void test_delete(void){
    int newContact = {"Delete_user", "12345"};
    TEST_ASSERT_EQUAL(0, delete(&addContact));

}
void test_displayBook(void){
    TEST_ASSERT_EQUAL(1, displayBook>0);
}
void test_search(void){
    int newContact = {"Search_User", "12345"};
    TEST_ASSERT_EQUAL(0, addContact(&addContact));
  }
int main(void){

    UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addContact);
  RUN_TEST(test_delete);
  RUN_TEST(test_search);
  RUN_TEST(test_displayBook);

   return UNITY_END();

}



