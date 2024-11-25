#include<stdio.h>
int main(){
    int a, b, c, d;
    int UCLN;
    int BCNN;
    
    printf("Moi ban nhap so nguyen duong a: ");
    scanf("%d", &a);
    printf("Moi ban nhap so nguyen duong b: ");
    scanf("%d", &b);
    
    while (a < 0 && b < 0) {
        printf("Moi ban nhap so nguyen duong a: ");
        scanf("%d", &a);
        printf("Moi ban nhap so nguyen duong b: ");
        scanf("%d", &b);
    }
    c = a;
    d = b;
    if (a == 0 || b == 0) {
        UCLN = a + b;
    } else {
        while (a != b) {
            if (a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }
        UCLN = a;
    }
    
    BCNN = (c * d) / UCLN;
    printf("Boi chung nho nhat cua hai so la %d ", BCNN);
    
    return 0;
}

