#include<iostream>
using namespace std;

int main()
{
    int n, remainder[32],i=0;
    cout<<"Enter the decimal number :- ";
    cin>>n;

    while(n>0)
    {
        remainder[i]=n%2;
        n=n/2;
        i++;
    }

    cout<<"Binary form of the decimal number :- ";
    for(int j=i-1;j>=0;j--)
    {
        cout<<remainder[j];
    }
    return 0;
}