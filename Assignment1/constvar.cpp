#include <stdio.h> 
#include <iostream>

int main() 
{  
   // const int a= 10;  // const variable 
   //  printf(" a : %d \n", a);


   // int val= 40;
   // int num = 30;
   // a = 20; // cant change the const variable value again 
    

   //int const * ptr = &val; // constant * ptr can only change the address not value
  // *ptr = 50; // error 
  //ptr = &num; // point toward int num address
  //printf(" *ptr : %d \n", *ptr); // *ptr gives the value of num


  //int * const ptr = &val;
  //*ptr = 60;
  // printf(" *ptr : %d \n", *ptr); // *ptr gives the value of val

  // const int * const ptr = &val;
   //*ptr = 89; // cant change the value of val bcoz it is constant.
   //ptr = &num; // cant change the address of val to num bcoz it is constant.
}