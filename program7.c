#include<stdio.h>
#include<string.h>
#define MAX 30
void abbreviation(char str[])
{
	int len=strlen(str);
	int i=0;
	char ch =str[i];
	for(i=0;i<len;i++)
	{
		ch=str[i];
		if(ch>=65 && ch<=90)
		{
			printf("%c ",ch);
		}
	}
}

int main()
{
	char str[MAX];
	printf("enter the string:\n");
	fgets(str,MAX,stdin);
	abbreviation(str);
}
