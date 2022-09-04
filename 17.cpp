#include<iostream>
using namespace std;

int main()
{
    int a,b,c,greater;

    cout<<"Enter number a = ";
    cin>>a;
    cout<<"Enter number b = ";
    cin>>b;
    cout<<"Enter number c = ";
    cin>>c;

    if(a==b && b==c)
    {
        cout<<"All the numbers are equal !!!!!!!!!!";
    }
    else if (a>b && a>c)
    {
        cout<<"Greater number among the three is :- "<<a;
    }
    else if (b>>a && b>>c)
    {
        cout<<"Greater number among the three is :- "<<b;
    }
    else
    {
        cout<<"Greater number among the three is :- "<<c;
    }
    
    return 0;    
}