#include<stdio.h>
int main()
{
   int a1[50],a2[50],temp[50],i;

   printf("enter numbers for 1st array:\n");
   for(i=0;i<5;i++)
     scanf("%d",&a1[i]);

   printf("enter elements for 2nd array:\n");
   for(i=0;i<5;i++)
     scanf("%d",&a2[i]);


   for(i=0;i<5;i++)
   {
      temp[i]=a2[i];
      a2[i]=a1[i];
      a1[i]=temp[i];
   }
   
   printf("after swapping 1st array: \n"); 
   for(i=0;i<5;i++)
      printf("%d \n",a1[i]);

   printf("after swapping 2nd array: \n");
   for(i=0;i<5;i++)
      printf("%d \n",a2[i]);
return 0;
}

    
    
    
