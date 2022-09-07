#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"\nEnter the alphabet in lowercase or uppercase :- ";
    cin>>ch;

    if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
        cout<<"\n\nConverting the letter in lowercase.....\n\n"<<"Letter in lowercase is :- "<<ch;
    }
    else if ( ch>='a' && ch<='z')
    {
        ch=ch-32;
        cout<<"\n\nConverting the letter in uppercase.....\n\n"<<"Letter in uppercase is :- "<<ch;
    }
    else
    {
        cout<<"\n\nSorry wrong input!!!!";
    }
    return 0;
}