#include<stdio.h>
int subarray_sum(int a[],int n,int sum)
{
	int curr_sum=a[0];
	int i=0,j=0,k=0;
	for(i=0;i<n;i++)
	{
		curr_sum=a[i];
		for(j=i+1;j<n;j++)
		{
			if(curr_sum==sum)
			{
				printf("the sum %d found between the indices %d and %d\n",sum,i,j-1);
				printf("the subarray is : ");
				for(k=i;k<j;k++)
				{
					printf("%d\t",a[k]);
					
				}
				return 1;
			}
			
			if(curr_sum || j==n)
			{
				break;
			}
			curr_sum+=a[j];
		}
	}
	printf("sum not found\n");
	return 0;
}

int main()
{
	int arr[]={6,5,4,9,6,2,9,4};
	int n=sizeof(arr)/sizeof(arr[0]]);
	int sum=0;
	printf("enter the sum:\n");
	scanf('%d',&sum);
	subarray_sum(arr,n,sum);
}
