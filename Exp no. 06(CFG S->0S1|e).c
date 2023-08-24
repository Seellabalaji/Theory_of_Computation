// S->0S1|e

#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,flag,count1,count2,flag1;
	int l;
	printf("CONTEXT FREE GRAMMER: S->0S1|e");
	printf("\nEnter the string to check:");
	scanf("%s",&s);
	l=strlen(s);
	flag=1;
	for(i=0;i<l;i++)
	{
		if(s[i]!='0' && s[i]!='1')
		{
			flag=0;
		}
	}
	if (flag!=1)
	printf("String is not Valid");
	if (flag==1)
	{
		i=0;count1=0;
		while(s[i]=='0')
		{
			count1++;
			i++;
        }
		flag1=1;
		count2=0;
		while(i<l)
		{
			if(s[i]=='1')
			{
				count2++;
			}
			else
			{
				flag1=0;
			}
			i++;
		}
		if(flag1==1)
		{
			if(count1==count2)
 			{
 				printf("\nString is Accepted\n");
 			}
 		else
 		{
 			printf("String is Rejected\n");
		}
	    }
	else
	{
 		printf("String is Rejected\n");
	}
	}
}
