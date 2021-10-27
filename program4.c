#include<stdio.h>

void pairSum(int arr[],int n,int sum)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==sum)
			{
				printf("sum found at indices %d and %d\n",i,j);
				break;
			}
		}
	}
	printf("No indices found\n");
}

int main()
{
	int n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	int arr[n];
	int i,sum=0;
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the sum value:\n");
	scanf("%d",&sum);
	pairSum(arr,n,sum);
}
