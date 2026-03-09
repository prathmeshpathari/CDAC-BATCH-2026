#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;

    public:
       
       complex(int real, int imag)
       {
        this->real=real;
        this->imag=imag;
       }

       complex operator++(int)
       {
           complex temp = * this;
           real++;
           imag++;
           printdata();
           return * this;
       }

       complex& operator++()
       {
            ++real;
            ++imag;
            
            return * this;
       }
       
       void printdata()
       {
          cout << "Complex Number = " << real << "+j" << imag << endl;
       }

       friend bool operator>(complex &c1 , complex &c2);
       friend class demo;
};

bool operator>(complex &c1 , complex &c2)
{
    return (c1.real > c2.real) && (c1.imag > c2.imag);
}

class demo
{
    public:
   void printinfo( complex &c1)
   {
    cout << "Complex Number = " << c1.real << "+j" << c1.imag << endl;
   }
};

int main()
{
    complex c1(5,7);
    c1.printdata();

    // demo d1;
    // d1.printinfo(c1);

    complex c2 = c1++;
    c2.printdata();

    complex c3 = ++c1;
    c3.printdata();

    complex c4(2,3);
    
    if(c1 > c4)
    {
        cout << "both real and imag are greater" << endl;
    }
    else
    {
        cout << "both real and imag are not greater" << endl;
        
    }
    
}