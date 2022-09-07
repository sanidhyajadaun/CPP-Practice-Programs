#include<iostream>
using namespace std;

int main()
{
    int n1, n2, remainder,quotient;

    cout<<"\n\nEnter the first number :- ";
    cin>>n1;

    cout<<"\nEnter the second number :- ";
    cin>>n2;

    if(n1>n2)
    {
        quotient=n1/n2;
        remainder=n1%n2;
        cout<<"\n\nQuotient :- "<<quotient<<"\nRemainder :- "<<remainder;
    }
    else if(n2>n1)
    {
        quotient=n2/n1;
        remainder=n2%n1;
         cout<<"\n\nQuotient :- "<<quotient<<"\nRemainder :- "<<remainder;
    }
    else{
        cout<<"Wrong Input !!!!";
    }
   
    return 0;
    
}