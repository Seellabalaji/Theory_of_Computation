//S -> 0S0 | 1S1 | 0 | 1 | e

#include<stdio.h>
#include<string.h>
#define max 100
int main() 
{
   char str[max],f='a';
   int i;
   printf("CONTEXT FREE GRAMMER : S -> 0S0 | 1S1 | 0 | 1 | e\n");
   printf("Enter the string to be checked: ");
   scanf("%s",str);
   int length = strlen(str);
   if (str[0]==str[length-1]&&str[1]==str[length-2])
   {
      printf("Accepted");
   }
    else
	{
      printf("Rejected");
    return 0;
    }
}
