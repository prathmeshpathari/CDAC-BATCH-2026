#include <iostream>
using namespace std;

class Box
{
    int length ;
    int width;
    int height;
   

    public: 

       Box(int length , int width, int height):length(length),width(width),height(height)
       {
          
       }

       void setdimension(int l, int w , int h)
       {
            this->length= l;
            this->width= w;
            this->height= l;
       }
       void volume()
       {
           int volume = length*width*height;
           cout << "Volume of Box :" << volume << endl;
       }
};

int main()
{
    Box b1(10,20,30);
    b1.volume();

    b1.setdimension(45,90,65);
    b1.volume();

}