#include<stdio.h>
int main(){
	float a,b,c;
	int option;
	do {
	printf("    \nMENU\n"); 
	printf("1: Nhap 3 so\n");
	printf("2: Tong 3 so\n");
	printf("3: Trung binh cong 3 so\n");
	printf("4: So nho nhat\n");
	printf("5: So lon nhat\n");
	printf("6: Thoat\n");
	
	printf("Moi ban chon phan ban muon: ");
	scanf("%d",&option);


	switch(option){
		case 1: 
			printf("Moi ban nhap so a: "); 
			scanf("%f",&a); 
			printf("Moi ban nhap so b: "); 
			scanf("%f",&b); 
			printf("Moi ban nhap so c: "); 
			scanf("%f",&b);
			printf("3 so da nhap la %f %f %f",a,b,c); 
			break; 
		case 2:
			printf("Moi ban nhap so a: "); 
			scanf("%f",&a); 
			printf("Moi ban nhap so b: "); 
			scanf("%f",&b);
			printf("Moi ban nhap so c: "); 
			scanf("%f",&c); 
			printf("Tong cua 2 so %f va %f va %f la %f",a,b,c,a+b+c); 
			break; 
		case 3: 
			printf("Moi ban nhap so a: "); 
			scanf("%f",&a); 
			printf("Moi ban nhap so b: "); 
			scanf("%f",&b); 
			printf("Moi ban nhap so c: "); 
			scanf("%f",&c);
			printf("Trung binh cong  cua 3 so %f va %f va %f la %f",a,b,c,(a+b+c)/3); 
			break; 
		
		case 4: 
			printf("Moi ban nhap so a: "); 
			scanf("%f",&a); 
			printf("Moi ban nhap so b: "); 
			scanf("%f",&b); 
			printf("Moi ban nhap so c: "); 
			scanf("%f",&c);
			if(a<b&&a<c){
				printf("%f la so be nhat ",a); 
			}else if(b<a&&b<c){
				printf("%f la so be nhat ",b); 
			}else {
				printf("%f la so be nhat ",c); 
			}  
				break; 
		case 5: 
			printf("Moi ban nhap so a: "); 
			scanf("%f",&a); 
			printf("Moi ban nhap so b: "); 
			scanf("%f",&b); 
			printf("Moi ban nhap so c: "); 
			scanf("%f",&c);
			if(a>b&&a>c){
				printf("%f la so lon nhat ",a); 
			}else if(b>a&&b>c){
				printf("%f la so lon nhat ",b); 
			}else {
				printf("%f la so lon nhat ",c); 
			
			break;
		case 6:
			printf("Thoat khoi chuong trinh");
			break;	 
		default: 
			printf("Chuong trinh khong hop le"); 
			} 
			}
			} while(option!=6); 
			return 0;
}
	 
