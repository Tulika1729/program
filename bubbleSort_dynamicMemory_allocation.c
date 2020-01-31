#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,j,temp,n;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<n-i-1;++j)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted elements are:\n");
	for(i=0;i<n;i++)
		printf("%d \n",a[i]);
	free(a);
	return 0;
}