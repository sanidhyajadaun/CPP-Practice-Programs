#include<iostream>
using namespace std;

int main()
{
    int cp,sp,profit,loss;

    cout<<"\n\n****Program to calculate profit & loss of the Seller****\n\n";

    cout<<"Enter the Cost Price :- ";
    cin>>cp;

    cout<<"\nEnter the Selling price :- ";
    cin>>sp;

    //checking profit & loss
    if(sp>cp)
    {
        profit = sp-cp;
        cout<<"\nProfit gain :- "<<profit;
    }
    else if(cp>sp)
    {
        loss = cp-sp;
        cout<<"\nLoss gain :- "<<loss;
    }
    else
    {
        cout<<"Wrong input of cost price and selling price";
    }
    
    return 0;
}