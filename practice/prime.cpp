#include<iostream>
using namespace std;
int main()
{
   int i,n;
   cout<<"Enter a number: ";
   cin>>n;
   for(i=2;i<n;i++)
   {
       if(n%i==0){
           cout<<"not a prime";
           break;
       }
       cout<<"prime";
       break;
   }
   return 0;
}