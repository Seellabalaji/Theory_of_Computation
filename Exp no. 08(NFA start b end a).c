#include<stdio.h>
#include<string.h>
main()
{
    char s[10],B='b',A='a';
    int n,c=0;
    printf("Enter the string:");
    scanf("%s",s);
    
    n =strlen(s);
    for(int i=0;i<n;i++)
   {
        if(s[i]=='b'|| s[i]=='a')
        {
    	c=0;
        }
        else
        { 
    	c=1;
	    printf("INVALID");
	    break;
        }
   }
 if (c==0)
 {
 if (s[0]==B && s[n-1]==A)
 {
 	printf("THE STRING WAS ACCEPTED");
 }
 else
 {
 	printf("THE STRING WAS REJECTED");
 }
 }
}

