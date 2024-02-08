#include<stdio.h>
int sum(int a){
	if(a==0) return 0;
	int s=0;
	return (a%10+sum(a/10));
	
}
int main(){
	int a;
	printf("enter no.:");
	scanf("%d",&a);
	int s=sum(a);
	printf("%d",s);
	return 0;
}