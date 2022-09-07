#include<iostream>
using namespace std;

int main()
{
    int n1, n2,x,y,temp,hcf,lcm;
    cout<<"\n\nEnter the numn2er 1 & numn2er 2 :- ";
    cin>>n1>>n2;

    x=n1;
    y=n2;

    while (n2!=0)
    {
        temp = n2;
        n2 = n1%n2;
        n1 = temp;
    }

    hcf = n1;
    lcm = (x*y)/hcf;

    cout<<"\nLCM = "<<lcm<<"\nHCF = "<<hcf;
    return 0 ;
    

}