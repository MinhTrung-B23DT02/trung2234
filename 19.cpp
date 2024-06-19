#include<stdio.h>
int fb(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fb(n-1)+fb(n-2);
}
int main (){
	int n;
	do {
		scanf("%d",&n);
	}while(n<0);
	printf("%d",fb(n));
}
