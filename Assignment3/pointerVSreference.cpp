#include<iostream>
using namespace std;

int main()
{
    int a= 10;
     
    int &ref = a;

    int *p= &a;

    ref=20;
    cout << " Reference variable :" << ref << " " << a <<endl;
    *p= 30;
    cout << " pointer variable :" << *p << " " << a <<endl;
}