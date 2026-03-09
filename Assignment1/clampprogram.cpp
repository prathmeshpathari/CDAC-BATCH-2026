#include<stdio.h>
#include<iostream>
using namespace std;

int absolute (int n)
{
   return n; 
}

int clamp(int val, int lo, int hi)
{
    int a = (val < lo) ? lo : (( val < hi) ? hi : val) ;
    return a;
}

int main()
{
    int val;
    int lo;
    int hi;
    int count = 4;
    int a , b, c, d , e , f, g ,h;
    
    for (int i = 1; i <= count; i++)
    {
        cin  >> val >> lo >> hi;
         a= absolute (val);
         b= clamp(val, lo, hi);
         c= absolute (val);
         d= clamp(val, lo, hi);
         e= absolute (val);
         f= clamp(val, lo, hi);
         g= absolute (val);
         h= clamp(val, lo, hi);
    }
        cout << "val" << "    "  << "lo" << "  "  << "hi" << "  "   << "absolute(val)" << "  " << "clamp(val, lo, hi)" << "  "<< endl;
        cout << val << "    "  << lo << "  "  << hi << "  "   << a << "  " << b << "  "<< endl;
        cout << "val" << "    "  << "lo" << "  "  << "hi" << "  "   << "absolute(val)" << "  " << "clamp(val, lo, hi)" << "  "<< endl;
        cout << val << "    "  << lo << "  "  << hi << "  "   << c << "  " << d << "  "<< endl;
        cout << "val" << "    "  << "lo" << "  "  << "hi" << "  "   << "absolute(val)" << "  " << "clamp(val, lo, hi)" << "  "<< endl;
        cout << val << "    "  << lo << "  "  << hi << "  "   << e << "  " << f << "  "<< endl;
        cout << "val" << "    "  << "lo" << "  "  << "hi" << "  "   << "absolute(val)" << "  " << "clamp(val, lo, hi)" << "  "<< endl;
        cout << val << "    "  << lo << "  "  << hi << "  "   << g << "  " << h << "  "<< endl;

    // cin  >> val >> lo >> hi;
    // int a= absolute (val);
    // int b= clamp(val, lo, hi);
    // cout << "val" << "  "  << "lo" << "  "  << "hi" << "  "   << "absolute(val)" << "  " << "clamp(val, lo, hi)" << "  "<< endl;
    // cout << val << "  "  << lo << "  "  << hi << "  "   << a << "  " << b << "  "<< endl;

    // cin  >> val >> lo >> hi;
    // int c= absolute (val);
    // int d= clamp(val, lo, hi);
    // cout << "val" << "  "  << "lo" << "  "  << "hi" << "  "   << "absolute(val)" << "  " << "clamp(val, lo, hi)" << "  "<< endl;
    // cout << val << "  "  << lo << "  "  << hi << "  "   << c << "  " << d << "  "<< endl;

    // cin  >> val >> lo >> hi;
    // int a= absolute (val);
    // int b= clamp(val, lo, hi);
    // cout << "val" << "  "  << "lo" << "  "  << "hi" << "  "   << "absolute(val)" << "  " << "clamp(val, lo, hi)" << "  "<< endl;
    // cout << val << "  "  << lo << "  "  << hi << "  "   << a << "  " << b << "  "<< endl;

    //   cin  >> val >> lo >> hi;
    // int a= absolute (val);
    // int b= clamp(val, lo, hi);
    // cout << "val" << "  "  << "lo" << "  "  << "hi" << "  "   << "absolute(val)" << "  " << "clamp(val, lo, hi)" << "  "<< endl;
    // cout << val << "  "  << lo << "  "  << hi << "  "   << a << "  " << b << "  "<< endl;



}

