#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Input two numbers :- "; 
    cin>>a>>b;
    cout<<"Numbers before swapping : "<<"\na = "<<a<<"\nb = "<<b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"\nNumbers after swapping : "<<"\na = "<<a<<"\nb = "<<b;
}
