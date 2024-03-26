#include <stdio.h>
#include "menu.h"
#include <stdlib.h>
int so_nguyen()
{
	system("CLS");
    float a;
    printf("Nhap 1 so bat ky de kiem tra xem co phai so nguyen khong\n");
    scanf("%f", &a);
    if (a == (int)a)
        printf("%.0f la so nguyen\n", a);

    else
        printf("%.2f khong phai la so nguyen to\n", a);
    back();
    return 0;
}
