#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000], a[1000];
    int max = -1e9;
    gets(s);
    char *token= strtok(s," ");
    while(token != NULL)
    { 	
    	int n = strlen(s);
        if( n > max)
	{
            max=n;
            strcpy(a,token);
        }
        token = strtok(NULL," ");
    } 
    printf("%s",a);
}
