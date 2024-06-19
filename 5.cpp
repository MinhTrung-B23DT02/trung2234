#include<stdio.h>
int daonguoc(int n){
	int sum =0;
	while(n){
		int r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	return sum;
	}

int main (){
	int n ;
	scanf("%d",&n);
	printf("%d",daonguoc(n));
}
