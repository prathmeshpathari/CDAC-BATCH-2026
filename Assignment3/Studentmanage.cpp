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

         Student(int rollno, string name, float marks )
         {
             this->rollno=rollno;
             this->name=name;
             this->marks=marks;
         }

         void Studentdetails()
         {
             cout << "Student Details : " << " Roll No :"<< rollno << " | " 
             << "Name : " << name << " | " << "Marks :" << marks << endl;
         }
};

int main()
{
    Student s1;
    s1.Studentdetails();

    Student s2( 121 ,"Pratham", 60);
    s2.Studentdetails();


}