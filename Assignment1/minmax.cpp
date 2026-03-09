#include<stdio.h>
#include<iostream>
using namespace std;
void findMinMax(int a, int b, int c, int &minVal, int &maxVal); 
int main()
{
    cout << "Before Findminmax()"  << endl;
    int hi = 30; 
    int lo = 10;
    cout << hi  << endl;
    cout << lo  << endl;
    findMinMax(60, 20, 100, lo, hi);
    cout << "                                        "  << endl;
    cout << "========================================"  << endl;
    cout << "                                        "  << endl;
    cout << "After Findminmax()"  << endl;
    cout << hi  << endl;
    cout << lo  << endl;
}

void findMinMax(int a, int b, int c, int &minVal, int &maxVal)
{
     a;
     b;
     c;
     maxVal;
     minVal;
    if( a >= b && a >= c)
    {
        maxVal = a;

    }
    else if(b >= c && b >= a)
    {
        maxVal=b;
        
    }
    else 
    {
        maxVal= c;
    }

    if( a <= b && a <= c)
    {
        minVal = a;

    }
    else if(b <= c && b <= a)
    {
        minVal=b;
        
    }
    else 
    {
        minVal= c;
    }
    
  
}


