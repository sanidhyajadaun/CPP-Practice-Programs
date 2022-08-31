#include<iostream>
using namespace std;

int main()
{
    char fname[20],mname[20],lname[20];

    cout<<"\nEnter the first name, middle name &  the last name :- ";
    cin>>fname>>mname>>lname;

    cout<<"Abbreviated Name :- ";
    cout<<fname[0]<<". "<<mname[0]<<". "<<lname<<"."<<endl;

    return 0;
}