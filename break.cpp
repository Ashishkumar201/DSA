#include<iostream>
using namespace std;
int main()
{
   //Print numbers from 0 to 100 not print btw divible by 3
   for(int i=0;i<=100;i++)
   {
       if(i%3==0 || i%5==0){
           continue;;
       }
       if(i%15==0)
       {
           //break;
       }
       cout<<i<<"\n";
   }
   return 0;
}