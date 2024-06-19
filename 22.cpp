#include<stdio.h>
void nhiphan(int n){
	if(n==0) return;
	else{
		int r=n%2;
		nhiphan(n/2);
		printf("%d",r);
	}
}
int main () {
	int n;
	scanf("%d",&n);
    nhiphan(n);
}
