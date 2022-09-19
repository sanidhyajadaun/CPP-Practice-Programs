#include<iostream>
using namespace std;

bool balancedParanthesis(string exp)
{
    int count=0;        //counter for number of paranthesis
    bool flag=true;     //variable that will hold true for equal number of brackets

    for(int i=0; i<exp.length(); i++)
    {
        if(exp[i]=='(')
        {
            count++;    //counter for opening bracket
        }
        else
        {
            count--;    //counter for closing bracket
        }

        if(count<0)     //if count is less than 0, then closing brackets are more
        {
            flag=false;
        }
    }

    if(count!=0)    //if count is not equal to 0, then paranthesis are not equal
    {
        flag=false;
    }

    return flag;
}


int main()
{
    string exp; //variable declaration

    cout<<"\n\nEnter the Paranthesis expression :- ";
    cin>>exp;       //Taking paranthesis expression input

    if(balancedParanthesis(exp))    //Function call that will return true or false
    {
        cout<<"\nParanthesis are balanced !!";
    }
    else
    {
        cout<<"\nParanthesis are not balanced !!";
    }
    return 0;
}