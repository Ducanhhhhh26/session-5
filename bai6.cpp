#include<stdio.h>
 int main(){
  int option;
  float a,b; 
  do{
   printf(" \nCALCULATOR\n"); 
   printf("1: Tong 2 so\n"); 
   printf("2: Hieu 2 so\n"); 
   printf("3: Tich 2 so\n"); 
   printf("4: Thuong 2 so\n"); 
   printf("5: Thoat\n"); 
   printf("Moi ban lua chon chuong trinh ban muon: "); 
   scanf("%d",&option); 
   switch(option){ 
		case 1: 
			printf("Moi ban nhap so a: "); 
			scanf("%f",&a); 
			printf("Moi ban nhap so b: "); 
			scanf("%f",&b); 
			printf("Tong cua 2 so %f va %f la %f",a,b,a+b); 
			break; 
		case 2: 
			printf("Moi ban nhap so a: "); 
			scanf("%f",&a); 
			printf("Moi ban nhap so b: "); 
			scanf("%f",&b); 
			printf("Hieu cua 2 so %f va %f la %f",a,b,a-b); 
			break; 
		case 3: 
			printf("Moi ban nhap so a: "); 
			scanf("%f",&a); 
			printf("Moi ban nhap so b: "); 
			scanf("%f",&b); 
			printf("Tich cua 2 so %f va %f la %f",a,b,a*b); 
			break; 
		case 4: 
			printf("Moi ban nhap so a: "); 
			scanf("%f",&a); 
			printf("Moi ban nhap so b: "); 
			scanf("%f",&b); 
			if(b!=0){ 
				printf("Thuong cua 2 so %f va %f la %f",a,b,a/b); 
			}else{ 
				printf("Khong the thuc hien phep chia"); 
				} 
				break; 
		case 5: 
			printf("Thoat khoi chuong trinh "); 
			break; 
		default: 
			printf("Chuong trinh khong hop le"); 
			} 
			}while(option!=5); 
			}
