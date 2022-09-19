#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"\nEnter the year :- ";
    cin>>year;

    if(year%400==0)
    {
        cout<<"\nGiven year is leap year!!!";
    }
    else if(year%4==0){
        cout<<"\nGiven year is leap year!!!";
    }
    else
    {
        cout<<"\nGiven year is not leap year!!!";
    }
    return 0;
}