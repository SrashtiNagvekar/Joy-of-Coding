#include<stdio.h>
#define COUNT 256
void frequency(int arr[],int n)
{
	int temp[COUNT]={0};
	int i=0;
	for(i=0;i<n;i++)
	{
		temp[arr[i]]++;
	}
	for(i=;i<n;i++)
	{
		printf("%d ocuurs %d times\n",arr[i],temp[arr[i]]);
	}
}

int main()
{
	int arr[]={2,3,5,,8,4,1,2,1,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	frequency(arr,n);
}
