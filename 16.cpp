#include<iostream>
using namespace std;

int main()
{
    int principle, time,rate,SI;
    
    cout<<"\n------------------------------------\n";
    cout<<"Program to calculate Simple Interest\n";
    cout<<"------------------------------------\n";

    cout<<"\nEnter the Principle :- ";
    cin>>principle;
    cout<<"\nEnter the time :- ";
    cin>>time;
    cout<<"\nEnter the rate :- ";
    cin>>rate;

    SI = (principle*rate*time)/100;

    cout<<"\nSimple Interest :- "<<SI<<endl;;

}