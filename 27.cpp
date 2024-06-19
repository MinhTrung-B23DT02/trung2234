#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000];
    int cnt = 0;
    gets(c);
    char *token= strtok(c," ");
    while(token != NULL)
    { 	
	    cnt++;
        token = strtok(NULL," ");
    } 
    printf("%d",cnt);
}
