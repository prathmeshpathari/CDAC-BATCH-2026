//Q1. Create a class called Student with the following private data members:

#include<iostream>
#include<string.h>
using namespace std;

class StudentGrade
{
 private:
     string studentname;
     int  rollno;
     float marks;
     char Grade;


 public:
         // student name 
         void setstudentname(string name)
        { 
            studentname= name;
        } 

         string getstudentname() 
        { 
          return studentname; 
        }
         
         // Roll no.
        void setRollNo(int num)
        { 
         if(num > 0 && num < 100) 
            rollno = num; 
        } 

         int getRollNo() 
        { 
          return rollno; 
        }

        // marks
         void setmarks(float num)
        { 
         if(num > 0 && num < 100) 
            marks = num; 
        } 

         float getmarks() 
        { 
          return marks; 
        }

        // Grade
        void setGrade(char grade)
        { 
            Grade = grade; 
        } 

         char getGrade() 
        { 
          return Grade; 
        }

        //CalculateGrade Method 
        void CalculateGrade()
        {
            char grade;
            if(marks>=90 && marks<=100)
            {
                grade='A';
            }
            else if(marks>=80 && marks<=89)
            {
                grade='B';
            }
             else if(marks>=70 && marks<=79)
            {
                grade='C';
            }
             else if(marks>=60 && marks<=69)
            {
                grade='D';
            }
            else
            {
                grade = 'F';
            }
             setGrade(grade);
            
        }

        void Acceptinfo()
        {
            string name;
            cout << "Kindly fiil your information"  << endl;
            cout << "Enter your Name"  << endl;
           // cin >> setstudentname(name) >> endl;
            cin >> name ;
            cout << "Enter your Roll No"  << endl;
            cin >> rollno ;
            cout << "Enter your Marks"  << endl;
            cin >> marks ;
            setstudentname(name);
            int rollno;
            setRollNo(rollno);
            float marks;
            setRollNo(marks);
            CalculateGrade();
            Displayinfo();

        }

        void Displayinfo()
        {
            cout << "Kindly Check your Information"  << endl;
            cout << studentname  << endl;
            cout << rollno << endl;
            cout << marks  << endl;
            cout << Grade  << endl;
        }
        
  };

  int main()
  {   
      int num;
      do
      {
        StudentGrade s1;
      cout << "Kindly Choose your option"  << endl;
      cout << "1. Accept Information "  << endl;
      cout << "2. Display Information "  << endl;
      cout << "3. Calculate Grade "  << endl;
      cout << "4. Exit the Program "  << endl;
      cin >> num ;
      switch (num)
      {
      case 1: s1.Acceptinfo();
              break;

      case 2: s1.Displayinfo();
              break;
    
      case 3: s1.CalculateGrade();
              break;

      case 4:  cout << " Program Ends "  << endl;
                cout << " THANK YOU "  << endl;
              break;    
      
      default: cerr << "Invalid Choice Option "  << endl;
          break;
      }
   
     } while (num != 0);
      
  }
