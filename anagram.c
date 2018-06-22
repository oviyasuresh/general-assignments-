#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[10],str2[10];
	int i,j,l1,l2,temp;
	scanf("%s %s",str1,str2);
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1!=l2)
	{
		printf("not an anagram");
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			for(j=i+1;j<l1;j++)
			{
				if(str1[i]>str1[j])
				{
					temp=str1[i];
					str1[i]=str1[j];
					str1[j]=temp;
				}
			}
		}
		for(i=0;i<l2;i++)
		{
			for(j=i+1;j<l2;j++)
			{
				if(str2[i]>str2[j])
				{
					temp=str2[i];
					str2[i]=str2[j];
					str2[j]=temp;
				}
			}
		}
	if(strcmp(str1,str2)==0)
	{
		printf("anagram");
	}
	else  
	{
		printf("no anagram");
	}
	}
	

	return 0;
}
