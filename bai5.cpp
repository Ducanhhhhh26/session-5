#include<stdio.h>
int main(){
	int i,n,result;
	for(n=0;n<10;n++){
		for(i=0;i<=10;i++){
			result = n*i;
			printf("%d * %d = %d\n",n,i,result);
		} 
	}
	return 0; 
} 
