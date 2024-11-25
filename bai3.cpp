#include<stdio.h>
int main(){
	int i; 
	int n;
	int sum=0;
	printf("Moi ban nhap vao mot so nguyen duong: ");
	scanf("%d",&n);
	while(n<0){
		printf("Moi ban nhap vao mot so nguyen duong: ");
		scanf("%d",&n); 	
	}
	for(i=0;i<=n;i++){
		sum=sum+i; 
	}
	printf("Tong cua so so nguyen la %d",sum);
	return 0; 
	
	 
} 
