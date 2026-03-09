#include<iostream>
using namespace std;

class Employee
{
    const int empID;
    string name;
    float sal;

    public:

         Employee(int empID , string name, float sal): empID(empID),name(name),sal(sal)
         {

         }

          void Employeedetails()
         {
             cout << "Employee Details : " << " Employee ID :"<< empID << " | " 
             << "Employee Name : " << name << " | " << "Employee Salary :" << sal << endl;
         }
};

int main()
{
    Employee e1(2675109, "Prathmesh Pathari", 60000.00);
    e1.Employeedetails();


}