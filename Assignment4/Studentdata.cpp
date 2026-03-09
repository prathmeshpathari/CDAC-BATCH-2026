#include<iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
    float marks;

    public:
         Student()
         {
              rollno=0;
              name="";
              marks=0.0;
         }

         Student(int rollno, string name, float marks) : rollno(rollno) , name(name), marks(marks)
         {

         }

         ~Student()
         {
             cout << "Destroying Student...." << endl;
         }

         void displayinfo()
         {
             cout << rollno << " | " << name <<  " | " << marks << endl;
         }
};

int main()
{
    
    Student s1[3]=
    {
        {102,"ravi",60},
        {103,"pratham",50},
        {104,"vinay",90}
    };
  
    for (int i = 0; i < 3; i++)
    {
        s1[i].displayinfo();
    }
    
    
}