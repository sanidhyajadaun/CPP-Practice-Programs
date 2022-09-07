#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"\nEnter the character :- ";
    cin>>ch;

    if(ch>=45 && ch<=56)
    {
        cout<<"\nGiven character is a digit"<<endl;
    }
    else if (ch>=97 && ch<=122)
    {
        cout<<"\nGiven character is lowercase alphabet"<<endl;
    }
    else if(ch>=65 && ch<=90)
    {
        cout<<"\nGiven character is uppercase alphabet"<<endl;
    }
    else
    {
        cout<<"\nWrong input!!!!!!!!!"<<endl;
    }
    
    return 0;

}