#include<stdio.h>
int bsearch(int a[],int low,int high,int x)
{

	int mid;
	mid=low+(high-low)/2;
	if(low>high)
		return -1;
	if(x==a[mid])
		return mid;
	else if(x<a[mid])
		return bsearch(a,low,mid-1,x);
	else
		return bsearch(a,mid+1,high,x);
}	
int main()
{
	int low,high,mid,n,x,position,i;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);


	low=0;
	high=n-1;

	printf("Enter element to be searched \n");
	scanf("%d",&x);
position=bsearch(a,low,high,x);
if(position ==-1)
	printf("Element not found");
else
	printf("Element %d found at position %d \n",x,position+1);
return 0;
}