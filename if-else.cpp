#include<iostream>
using namespace std;
int main()
{
    int saving;
    cout<<"Enter the amount: ";
    cin>>saving;
    if(saving>5000)
    {
        //cout<<"Go with Neha to date";
        if(saving>10000) // Nested if else
        {
            cout<<"Go for shopping with neha";
        }
        else cout<<"Go for a coffee with Neha";
    }
    else if(saving>2000 &&saving<5000)
    {
        cout<<"Go with Rashmi";
    }
    else 
    cout<<"Go with friends to enjoy";
    return 0;
}