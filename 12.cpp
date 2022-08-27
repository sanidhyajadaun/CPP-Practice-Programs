#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int r,area,circumference;
    cout<<"---------------------------------------------------\n";
    cout<<"Program to calculate area & circumference of circle\n";
    cout<<"---------------------------------------------------\n";

    cout<<"Enter the radius of circle :- ";
    cin>>r;

    area = 3.14*r*r;

    circumference = 2*3.14*r;

    cout<<"\nArea of Circle = "<<area;
    cout<<"\nCircumference of circle = "<<circumference;
    return 0;
}