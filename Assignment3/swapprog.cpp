#include<iostream>
using namespace std;

void swapByValue(int a, int b)
{
   int temp = a;
   a = b;
   b = temp;
}
void swapByAddress(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
     
    swapByValue(a,b);
    cout << a << " | "<< b << endl;

    swapByAddress(&a,&b);
    cout << a << " | "<< b << endl;

    swapByReference(a,b);
    cout << a << " | "<< b << endl;

}
