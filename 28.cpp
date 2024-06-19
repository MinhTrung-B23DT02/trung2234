#include<stdio.h>
#include<string.h>
void chuanhoa(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(c[i]>=97&&c[i]<=122){
			c[i]=c[i]-32;
		}
	}
}
int main(){
	char c[1000];
	gets(c);
	chuanhoa(c);
	printf("%s",c);
}
