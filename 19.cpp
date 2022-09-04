#include<iostream>
using namespace std;

int main()
{
    int phy,math,chem,eng,bio,i;
    float percentage;

    cout<<"\nEnter the marks of Physics :- ";
    cin>>phy;

    cout<<"\nEnter the marks of Maths :- ";
    cin>>math;

    cout<<"\nEnter the marks of Chemistry :- ";
    cin>>chem;

    cout<<"\nEnter the marks of English :- ";
    cin>>eng;

    cout<<"\nEnter the marks of Biology :- ";
    cin>>bio;

    percentage = (math+bio+phy+chem+eng)/5;

    cout<<"\nPercentage of the given 5 subjects is :- "<<percentage<<"%"<<endl;

    return 0;

    
}