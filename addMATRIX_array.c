#include<stdio.h>
int main()
{
   int i,j,a1[3][3],a2[3][3],s[3][3];
   
   printf("enter elements of 1st array: \n");
   for(i=0;i<3;i++)
     for(j=0;j<3;j++)
        scanf("%d",&a1[i][j]);

   printf("enter elements of 2nd array: \n");
   for(i=0;i<3;i++)
     for(j=0;j<3;j++)
        scanf("%d",&a2[i][j]);

   printf("sum of matrices: \n");
   for(i=0;i<3;i++)
    for(j=0;j<3;j++) 
     {
       s[i][j]=a1[i][j]+a2[i][j];

        printf("%d \n",s[i][j]);
      }
   printf("\n");  
 return 0;
}



