#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter any number :- ";
    cin>>n;

    if(n==0)
    {
        cout<<"\nGiven number is 0";
    }
    else if(n>0)
    {
        cout<<"\nGiven number is positive";
    }
    else 
    {
        cout<<"\nGiven number is negative";
    }
    return 0;
}