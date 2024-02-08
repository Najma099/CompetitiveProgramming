#include<stdio.h>
int fibo(int a){
	if(a==1||a==2) return 1;
	return fibo(a-2)+fibo(a-1);
}
int main(){
	int n;
	printf("enter no. of terms:");
	scanf("%d",&n);
	int f=fibo(n);
	printf("%d",f);
}