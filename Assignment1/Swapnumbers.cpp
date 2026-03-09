#include<stdio.h>
#include<iostream>
using namespace std;

void Swapnumbers(int * x, int * y, int * z );
int main()
{
    int x=10;
    int y=20;
    int z=30;
    cout << "Before Swapnumbers()"  << endl;
    cout << x << endl;
    cout << z << endl;
    Swapnumbers(&x, &y, &z);
    cout << "===================================================="  << endl;
    cout << "After Swapnumbers()"  << endl;
    cout << x << endl;
    cout << z << endl;
}

void Swapnumbers(int * x, int * y, int * z )
{
    int temp = *x;
    *x = *z;
    *z = temp;

}


//condition  ? expression_if_true : expression_if_false;