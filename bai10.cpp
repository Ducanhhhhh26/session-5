#include<stdio.h>
int main(){
	int num;
	int chuSo; 
	printf("Nhap vao so nguyen ban muon: ");
	scanf("%d",&num);
	if(num<0){
		num = -num; 
	} 
	while(num>0){
		 chuSo = num%10;
		 printf("%d\n",chuSo);
		 num =  num/10; 
	} 
	return 0; 
} 
