#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main (){
	int n;
	scanf("%d",&n);
	if(nt(n)) printf("YES");
	else printf("NO");
}
