#include<stdio.h>
int factorial(int n){
	if(n==1) return 1;
	return n*factorial(n-1);
}
int main(){
	int n;
	printf("enter no.to find factorial:");
	scanf("%d",&n);
	int f=factorial(n);
	printf("%d",f);
}