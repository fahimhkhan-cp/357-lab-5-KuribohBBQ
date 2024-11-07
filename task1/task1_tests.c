#include "checkit.h"
#include "task1.h"

void test1() {
   char input[] = "Hello THERE";
   char result[15];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}


void test2() {
   char input2[] = "BAYONETTA";
   char *expected2 = "bayonetta";
  

   str_lower_mutate(input2);

   checkit_string(input2, expected2);

}
void test3() {
   char input1[] = "LOVE is BLUE";
   char result1[15];
   char *expected1 = "love is blue";

   str_lower(input1, result1);

   checkit_string(result1, expected1);
}

int main(void) {
   test1();
   test2();
   test3();
   return 0;
}
