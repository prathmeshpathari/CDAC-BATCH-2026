#include<stdio.h>
#include<iostream>
using namespace std;

float circleArea(float radius);
float circlePerimeter(float radius);
const float PI = 3.14159f;
int main()
{
    float circlearea= circleArea(7.0f);
    cout << circlearea  << endl;
    float circlePeri= circlePerimeter(7.0f);
    cout << circlePeri  << endl;
}
float circleArea(float r)
 {
     float area= PI*r*r;
     return area;
 }
float circlePerimeter(float r)
{
    float perimeter= 2 * PI * r;
     return perimeter;
}
