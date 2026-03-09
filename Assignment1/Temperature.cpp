#include<stdio.h>
#include<iostream>
using namespace std;
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main()
{
    cout << celsiusToFahrenheit(40)  << endl;
    cout << fahrenheitToCelsius(50)  << endl;
}

float celsiusToFahrenheit(float c)
{
    float Fahr = ( (c * 9/5) + 32);
    return Fahr;
}

float fahrenheitToCelsius(float f)
{
    float celc = ((f - 32) * 5/9);
    return celc;
}
//condition  ? expression_if_true : expression_if_false;