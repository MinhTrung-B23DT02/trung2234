#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d",&a[i]);
	int m=-1e9,k=-1e9;
	for(int i=0; i<n; i++) {
		if(a[i]>k) k=a[i];
	}
	for(int i=0; i<n; i++) {
		if(a[i]>m&&a[i]!=k) m=a[i];
	}
	printf("%d",m);
}


