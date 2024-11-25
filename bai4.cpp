#include<stdio.h>
int main(){
	int i,n,result;
	printf("Moi ban nhap vao so tu 1-10:");
	scanf("%d",&n);
	while(n<1||n>10){
		printf("Moi ban nhap vao so tu 1-10:");
		scanf("%d",&n); 
	}
	for(i=0;i<=10;i++){
		result=n*i; 
		printf("%d * %d = %d\n",n,i,result); 
	} 
	return 0; 
	
	
} 
