#include<stdio.h>
void Knapsack(int n,float weight[],float profit[],float size)
{
	float tweight=0.0,tprofit=0.0,x=0.0,y=0.0;
	int i;
	for(i=0;i<n;i++)
{
	if(tweight>=size)
		break;
	else 
	{
		if(tweight+weight[i]<size)
		{
			tweight=tweight+weight[i];
			tprofit=tprofit+profit[i];
		}
		else
		{	
			x=size-tweight;
			tweight=tweight+x;
			y=(x*profit[i])/weight[i];
			tprofit=tprofit+y;
		}

	}
}
printf("Maximum profit is %f \n",tprofit);

}

int main()
{
	int n,i,j,temp;
	float size;
	printf("Enter the size of Knapsack: \n");
	scanf("%f",&size);
	printf("Enter the number of objects:\n");
	scanf("%d",&n);
	float weight[n],profit[n],ratio[n];
	printf("Enter the weights and profits of each object \n");
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&weight[i],&profit[i]);
	}
	for(i=0;i<n;i++)
		ratio[i]=profit[i]/weight[i];
	for(i=0;i<n;i++)
	{	
		for(j=i+1;j<n;j++)
	{
		if(ratio[i]<ratio[j])
		{
			temp=ratio[j];
			ratio[j]=ratio[i];
			ratio[i]=temp;

			temp=weight[j];
			weight[j]=weight[i];
			weight[i]=temp;

			temp=profit[j];
			profit[j]=profit[i];
			profit[i]=temp;
		}	


	}		

	}		
	
Knapsack(n,weight,profit,size);
return 0;	
}