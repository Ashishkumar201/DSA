#include <iostream>
using namespace std;
int main()
{
 int c,i,j,k,n,l,m[10],p[10],po[20],flag,z,y,temp,temp1;
   cout<<"Enter total memory partitions:\t";
   cin>>n;
   cout<<"\nEnter the size of memory\n";
   for(i=1;i<=n;i++)
   {
    cout<<"partition "<<i<<" :\t";
    cin>>m[i];
    po[i]=i;
   }
   cout<<"\nEnter total number of processes:\t";
   cin>>j;
   cout<<"\nEnter size of \n";
   for(i=1;i<=j;i++)
   {
   cout<<"process "<<i<<" :\t";
    cin>>p[i];
   }
   cout<<"\n**Menu**\n1.first fit\n2.best fit\n3.worst fit\nenter choice:\t";
   cin>>c;
   switch(c)
   {
   case 1:
      for(i=1;i<=j;i++)
   {
     flag=1;

     for(k=1;k<=n;k++)

   {

     if(p[i]<=m[k])

     {

       cout<<"\nProcess "<<i<<" whose memory size is "<<p[i]<<"KB allocated at memory partition:\t"<<po[k];

       m[k]=m[k]-p[i];

       break;
     }
     else
     {
      flag++;
     }
   }
   if(flag>n)
   {
     cout<<"\nProcess "<<i<<" whose memory size is "<<p[i]<<"KB can't be allocated";
   }
   }
   break;
   case 2:
    for(y=1;y<=n;y++)
     {
     for(z=y;z<=n;z++)
     {
     if(m[y]>m[z])
     {
     temp=m[y];
     m[y]=m[z];
     m[z]=temp;
     temp1=po[y];
     po[y]=po[z];
     po[z]=temp1;
     }
     }
     }

     for(i=1;i<=j;i++)
   {
     flag=1;
     for(k=1;k<=n;k++)
   {
     if(p[i]<=m[k])

     {
       cout<<"\nProcess "<<i<<" whose memory size is "<<p[i]<<"KB allocated at memory partition:\t"<<po[k];
       m[k]=m[k]-p[i];
       break;
     }

     else
     {
      flag++;
     }
   }
   if(flag>n)
   {
     cout<<"\nProcess "<<i<<" whose memory size is "<<p[i]<<"KB can't be allocated";
   }
   }

     break;

     case 3:

     for(y=1;y<=n;y++)

     {
     for(z=y;z<=n;z++)
     {
     if(m[y]<m[z])
     {
     temp=m[y];
     m[y]=m[z];
     m[z]=temp;
     temp1=po[y];
     po[y]=po[z];
     po[z]=temp1;

     }
     
     }

     for(i=1;i<=j;i++)

   {

     flag=1;

     for(k=1;k<=n;k++)
   {
     if(p[i]<=m[k])
     {
       cout<<"\nProcess "<<i<<" whose memory size is "<<p[i]<<"KB allocated at memory partition:\t"<<po[k];
       m[k]=m[k]-p[i];
       break;
     }
     else
     {
      flag++;
     }
   }
   if(flag>n)
   {
     cout<<"\nProcess "<<i<<" whose memory size is "<<p[i]<<"KB can't be allocated";
   }
   }
     break;
     }
   return 0;
}
}