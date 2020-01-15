#include<stdio.h>
int main()
{
   int n,i,j,arr[50],k,temp[50],m;
   printf("enter the number of elements you want:");
   scanf("%d",&n);

   printf("enter numbers:");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

     
   printf("enter the index where number has to be inserted:");
   scanf("%d",&j);

   m=arr[j];   

   printf("enter the number you want to insert:");
   scanf("%d",&k);

   for(i=0;i<n;i++)
   {
     if(i<j)  
       temp[i]=arr[i];

     
     if(i==j)
       temp[i]=k;  
         

    if(i>j)
      temp[i+1]=arr[i];

   }
     
    temp[j+1]=m;

   for(i=0;i<n+1;i++)  
     printf("%d \n",temp[i]);

   

   
 
  
return 0;
} 
