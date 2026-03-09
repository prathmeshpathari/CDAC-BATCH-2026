#include<stdio.h>
#include<iostream>
using namespace std;
void totalmarks();
void Percentage();
float maths = 85.0f;
float science= 95.0f;
float history= 78.0f;
float physics= 80.0f;
float chemistry=90.0f;
int total ;
int percent;

int main()
{
    std::cout << "Maths =" << maths << endl;
    std::cout << "Science =" << science  << endl;
    std::cout << "History =" << history  << endl;
    std::cout << "Physics =" << physics  << endl;
    std::cout << "Chemistry =" << chemistry  << endl;
      


    std::cout << "==============================================================================" << endl;


    totalmarks();
    Percentage();
    //percent >= 75  ?  "grade A" : ((percent >= 60 && percent < 75) ? "grade B": ((percent >= 45 && percent <60)? "grade C " : "Grade F"));
    ( percent >= 75 && (percent < 75 && percent >=60)) ? std::cout << "Grade A" : std::cout << "Grade B";
    ( percent >= 45) ? std::cout << "Grade C" : std::cout << "Grade F";

    return 0; 
}

void totalmarks()
{
    total = maths + science + history + physics +  chemistry ;
    std::cout << " Total marks ="<< total << endl;
}

void Percentage()
{
    percent = (total/100 * 5);
    std::cout << " Percentage ="<< percent << endl;
}
//condition  ? expression_if_true : expression_if_false;