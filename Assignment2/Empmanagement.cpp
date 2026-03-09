#include<iostream>
using namespace std;

class Employee
{
     int empID;
     string empname;
     double empsal;
    // double grosssal = 0.0;

     public:

          Employee(int empID, string empname , double empsal )
          {
              this->empID=empID;
              this->empname=empname;
              this->empsal=empsal;
          }
          // EMPID
          
          void setempID (int id)
          {
              empID=id;
          }
          int getempID() const
          {
              return empID;
          }

          //EMPNAME
           void setempname (string name)
          {
              empname=name;
          }
          string getempname() const
          {
              return empname;
          }

          //EMPSALARY
           void setempsal (int sal)
          {
              empsal=sal;
          }
          int getempsal() const
          {
              return empsal;
          }

          double calculateGross()
          {
              if(empsal <= 5000)
              {
                   empsal = (empsal / 100) * 10 ;
                //  cout << "Gross Salary =" << empsal << endl;
              }

              else if(empsal >= 5000 && empsal <= 10000)
              {
                  empsal = (empsal / 100) * 15 ;
                //  cout << "Gross Salary =" << empsal << endl;
              }
               else if(empsal > 10000 )
              {
                   empsal = (empsal / 100) * 20 ;
               //   cout << "Gross Salary =" << empsal << endl;
                  
              }
              return empsal;
          }

          void displayempdeatils() const
          {
              cout << "Employee ID :" << empID << " | " 
              << "Employee Name :" << empname << " | " 
              << " Employee Salary :" << empsal <<endl;
             // cout << calculateGross() << endl;
          }
};

int main()
{
    Employee e1(101 ,"Prathmesh" , 5000.00);
    e1.displayempdeatils();
    cout << "Gross Salary :" << e1.calculateGross() << endl;

    Employee e2(102 ,"Vinay" , 10000.00);
    e2.displayempdeatils();
    cout << "Gross Salary :"  << e2.calculateGross() << endl;
}