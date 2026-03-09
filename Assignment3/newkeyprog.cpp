#include<iostream>
using namespace std;

int main()
{
    int num ;
    int i;
    cin >> num ;
    int * arr = new int[num];
    
    for (  i= 0 ; i < arr[num]; i++)
    {
        cin >> arr[i];
    } 

    for (  i= 0 ; i < arr[num]; i++)
    {
        cout << arr[i] << endl;
    } 
    delete []arr;
}