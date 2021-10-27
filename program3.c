#include<stdio.h>
#define COUNT 9

void frequency(int arr[],int n)
{
	int temp[COUNT]={0};
        for(int i=0;i<n;i++)
	{
		temp[arr[i]]++;
	}
	
	
	printf("balloons in the box are :\n");

	
	for(int i=0;i<=COUNT;i++)
	{
		if(temp[i]>0)
		{
			printf("%d\n",i);
		}
		/*if(temp[i]==1)
		{
			printf("%d\n",temp[i]);
			temp[i]=-1;
		}
		if(temp[i]>1)
		{
			printf("%d\n",temp[i]);
			temp[i]=-1;
		}
		if(temp[i]==-1 || temp[arr[i]]==0)
		{
			continue;
		}*/
	}
}

int main()
{
	int arr[]={6,5,4,9,6,2,9,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	frequency(arr,n);
}
