#include<stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	int max=-1e9;
	while(n){
		int r=n%10;
		if(r>max){
			max=r;
		}
		n/=10;
	}
	printf("%d",max);
}
