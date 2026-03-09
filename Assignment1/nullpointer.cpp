#include <stdio.h> 
void func(int val)
{ 
printf("inside int func!"); 
} 
void func(int* val)
{ 
printf("inside int* func!"); 
} 

int main() 
{  
// func(NULL);  ambiuous error
func(nullptr);
// NULL: is a macro which stores int value 0 in it. 
int* pt = nullptr; // type: nullprt_t 
int* ptr = NULL; 
return 0; 
}