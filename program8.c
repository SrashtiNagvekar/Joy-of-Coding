#include<stdio.h>
#include<string.h>

void frequency(char str[])
{
	int temp[26]={0};
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			temp[str[i]-97]++;
		}
	}
	int maxcount=temp[0];
	int index=0;
	for(int i=1;i<26;i++)
	{
		if(temp[i]>maxcount)
		{
			maxcount=temp[i];
			index=i;
		}
	}
	printf("the maximum occuring character is %c with frequency of %d\n",(index+97),temp[index]);
}

int main()
{
	char str[]="a big black bear sat on a big black rug";
	frequency(str);
}
