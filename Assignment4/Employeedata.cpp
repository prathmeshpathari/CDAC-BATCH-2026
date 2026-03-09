#include<iostream>
using namespace std;

class Employee
{
    int *ptrempID;
    string name;
    mutable int accesscount;

    public:

         Employee(int empID, string name , int accesscount)
         {
              this->ptrempID=new int;
              * this->ptrempID=empID;
              this->name=name;
              this->accesscount=accesscount;
              
         }

         Employee ( const Employee &refe1)
         {
             this->ptrempID=new int;
             * this->ptrempID= *refe1.ptrempID;
             this->name= refe1.name;
             this->accesscount=refe1.accesscount;
         }

         void displaycount() const
         {
              accesscount++;
              cout<< "Accesscount :" << accesscount << endl;
         }

         void Employeedetails()
         {
             cout << "Employee Details : " << " Employee ID :"<< *ptrempID << " | " 
             << "Employee Name : " << name << " | " << endl;
         }
};

int main()
{
    Employee e1 (102,"Prathmesh Pathari", 0);
    e1.Employeedetails();
    e1.displaycount();

    Employee e2(e1);
    e2.Employeedetails();
    e2.displaycount();
}