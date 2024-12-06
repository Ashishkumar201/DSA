#include<stdio.h>
#include<conio.h>
 int main()
   {
      int a[10],count=0,i,j,k,n,m;
      printf("Enter No. of Pages:");
      scanf("%d",&n);
      printf("Enter values of Reference String :");
      for(i=0;i<n;i++)
      {
       printf("\t");              
       scanf("%d",&a[i]);
       }
     printf("\nEnter no. of frames:");
     {
      printf("\t");
     scanf("%d",&m);
     }
     int count1[m];
     for(i=0;i<m;i++)
       count1[i]=-1;
     printf("\n distribution is shown\n");
     for(i=0;i<n;i++)
      {
            k=0;
            for(j=0;j<m;j++)
             {
                if(a[i]==count1[j])
                  {
                     k++;
                     count--;
                  }   
             }     
             count++;
             if(count<=m && k==0)
                {
                   count1[i]=a[i];
                }   
             else if(k==0)
                  {
                      count1[(count-1)%m]=a[i];
                  }
              printf("\n\t\n"); 
             for(j=0;j<m;j++)
             {
              printf("\t");       
              printf("%d\t",count1[j]);
              }
      } 
      printf("\n\n\tTotal Page Faults %d",count);
      getch();
      return 0;
}          