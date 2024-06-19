#include<stdio.h>
#include<string.h>
void daonguoc(char c[]){
	size_t len=strlen(c);
	for(int i=0;i<len/2;i++){
		char tmp=c[i];
		c[i]=c[len-i-1];
		c[len-i-1]=tmp;
	}
}
int main (){
	char c[1000];
	gets(c);
	daonguoc(c);
	printf("%s",c);
}
