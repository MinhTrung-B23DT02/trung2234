#include<stdio.h>
#include<string.h>
int check(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<r){
		if(c[l]!=c[r])
			return 0;
			++l;
			--r;
	}
	return 1;
}
int main (){
	char c[10000];
	scanf("%s",&c);
	if(check(c)==0) printf("No\n");
	else printf("Yes\n");
}
