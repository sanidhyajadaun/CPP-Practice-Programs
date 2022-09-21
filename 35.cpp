#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\n\nProgram to print the table of number\n\n";

    cout<<"Enter the number :- ";
    cin>>n;

    cout<<"\nTable of "<<n<<" is :- \n";
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<" = "<<n*i<<"\n";
    }

    return 0;

}