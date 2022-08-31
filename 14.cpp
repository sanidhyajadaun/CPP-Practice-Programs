#include<iostream>
using namespace std;

int main()
{
    float area=0;
    int b,h;

    cout<<"\n-------------------------------------\n";
    cout<<"Program to calculate area of triangle\n";
    cout<<"-------------------------------------\n";

    cout<<"\nEnter the base of the triangle :- ";
    cin>>b;
    cout<<"\nEnter the height of the triangle :- ";
    cin>>h;

    area = 0.5*b*h;

    cout<<"\nArea of triangle :- "<<area;

    return 0;

}