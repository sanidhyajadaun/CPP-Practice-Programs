#include<iostream>
using namespace std;

int main()
{
    float celsius,fahrenheit;

    cout<<"\nEnter the temperture in Celsius :- ";
    cin>>celsius;

    fahrenheit = 1.8*celsius+32;

    cout<<"\nTempertaure in fahrenheit is :- "<<fahrenheit<<endl;

    return 0;
}