#include<iostream>
using namespace std;
int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     if(n>10)
//     {
//         cout<<"Greater than 10";
//     }
//     else if(n==10)
//     {
//         cout<<"It is equal to 10";
//     }
//     else
//     {
//     cout<<"Smaller than 10";
//     }
//     return 0;
// }
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    if(n%2==0 && n%3==0)
    cout<<"Divisible by both";
    else if(n%2==0)
    {
        cout<<"Divible by 2 only";
    }
    else if(n%3==0)
    {
        cout<<"Divisible by 3 only";
    }
    else
    cout<<"Divisible by none";
    return 0;
}