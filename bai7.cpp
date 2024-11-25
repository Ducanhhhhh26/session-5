#include<stdio.h>
int main(){
	int a,b;
	int UCLN; 
	printf("Moi ban nhap so nguyen duong a: ");
	scanf("%d",&a);
	printf("moi ban nhap so nguyen duong b:"); 
	scanf("%d",&b);
	while(a<0&&b<00){
		printf("Moi ban nhap so nguyen duong a: ");
		scanf("%d",&a);
		printf("moi ban nhap so nguyen duong b:"); 
		scanf("%d",&b);
	}
	if(a==0||b==0){
		UCLN = a + b; 
	}else{
		while(a!=b){
		if(a>b){
			a=a-b; 
		}else{
			b=b-a; 
		}
		UCLN = a;
		
		}
		printf("Uoc chung lon nhat  la %d",a); 
	}
	return 0; 
	 
} 
