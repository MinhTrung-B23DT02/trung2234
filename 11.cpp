#include<stdio.h>
void gt(int n){
	int tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
	}
	printf("%d",tich);
}
int main (){
	int n;
	scanf("%d",&n);
	gt(n);
}
