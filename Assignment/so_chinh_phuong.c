#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int so_chinh_phuong()
{
	system("CLS");
	int number, chinh_phuong;
    printf("Moi ban nhap so vao de kiem tra\n");
    scanf("%d", &number);
    chinh_phuong = sqrt(number);
    if (pow(chinh_phuong,2)== number) {
        printf("%d la so chinh phuong\n", number);
    } else if(number<0) {
        printf("So chinh phuong khong the duoi 0\n");
    }else{
    	printf("%d khong phai la so chinh phuong\n", number);
	}
	back();
}
