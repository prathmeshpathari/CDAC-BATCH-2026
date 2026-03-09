/*
 * Calculate.cpp
 *
 *  Created on: 24-Feb-2026
 *      Author: Prathmesh
 */



#include<stdio.h>

void add()
{
	  int a;
	  int b;
	 int c;
	 printf("Enter Two Number");
	 scanf("%d %d", &a , &b);
	 c = a + b;
	 printf("Addition of two number = %d" , c);
}

void Multiply()
{
	 int a;
	 int b;
	 int c;
	 printf("Enter Two Number");
	 scanf("%d %d", &a , &b);
	 c= a*b;
	 printf("Multiplication of two number = %d", c);
}

void sub()
{
	 int a;
	 int b;
	 int c;
	 printf("Enter Two Number");
	 scanf("%d %d", &a , &b);
	 c= a-b;
	 printf("Subtraction of two number = %d", c);
}

void divide()
{
	 int a;
	 int b;
	 int c;
	 printf("Enter Two Number \n");
	 scanf("%d %d", &a , &b);
	 c= a/b;
	 printf("Division of two number = %d", c);
}

int main()
{
        int num;
        do
        {
             printf(" Please Enter your choice operation \n");
		 printf("1. Add Two numbers \n");
		 printf("2. Multiply Two Number \n");
		 printf("3. Subtraction Two Number \n");
		 printf("4. Divide Two Number \n");
		 
		 scanf("%d", &num);
		 switch(num)
		 {
		 case 1:
			  add();
		     break;

		 case 2:
			 Multiply();
			 break;

		 case 3:
			 sub();
			 break;

		 case 4:
			 divide();
			 break;

        default : 
                printf("Invalid Number");

		 
         return 0;
        } 
        }while (num != 0);
        
	  
}
