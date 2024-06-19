#include<stdio.h>
float laydoC(float doF){
	return 5*(doF-32)/9;
}
float laydoF(float doC){
	return (9*doC/5)+32;
}
int main (){
	for(float i=0.0;i<=100.0;i+=1.0){
		printf("%g do C = %g do F\n",i, laydoF(i));
	}
	for(float i=32.0;i<=42.0;i+=1.0){
		printf("%g do F = %g do C\n",i, laydoC(i));
	}
}
