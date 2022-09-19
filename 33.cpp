#include<iostream>
using namespace std;

const int max_valid_year = 9999;
const int min_valid_year = 1900;

bool leapyear(int y1)
{
    //return true if year is multiple of 4 or 400 but not divisible by 100
    return (((y1%4==0)&&(y1%100!=0)) || (y1%400==0));
} 

bool Checkdate(int d, int m,int y)
{
    //To check if the given date is in valid range
    if(y>max_valid_year || y<min_valid_year)
    {
        return false;
    }
    if(m<1 || m>31)
    {
        return false;
    }
    if(d<1 || d>31)
    {
        return false;
    }

    //to handle the february month with leap year
    if(m==2)
    {
        if(leapyear(y))
        {
            return (d<=29);
        }
        else
        {
            return (d<=28);
        }
    }

    //Month april, june, septempber, november 
    //should have days less than or equal to 30
    if(m==4 || m==6 || m==9 || m==11)
    {
        return(d<=30);
    }

    return true;


}

int main()
{
    int day,month,year;       //declaring variables

    cout<<"\n****Program to check if a datre is valid or not****\n";

    cout<<"\nEnter the day(dd) :- ";
    cin>>day;                               //taking day 

    cout<<"\nEnter the month(mm) :- ";
    cin>>month;                             //takimg month

    cout<<"\nEnter the year(yyyy) :- ";
    cin>>year;                              //taking year

    if(Checkdate(day,month,year))           //function call to validate the date
    {
        cout<<"\n\nDate is valid !!!!!\n\n";         
    }
    else
    {
        cout<<"\n\nDate is invalid !!!!!\n\n";
    }

}