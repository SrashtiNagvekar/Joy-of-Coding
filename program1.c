#include<stdio.h>

int duplicate(int arr[],int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<n;i++)
		{
			if(arr[i]==arr[j])
			{
				return 1;
				break;
			}
		}
	}
	
}

int main()
{
	int arr[]={10,2,5,9,21,10,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int res=duplicate(arr,n);
	if(res)
	{
		printf("duplicate found\n");
	}
	else
	{
			printf("duplicate not found\n");
	}
}
