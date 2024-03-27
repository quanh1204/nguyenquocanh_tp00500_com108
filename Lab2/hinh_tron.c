#include <stdio.h>
#include <stdlib.h>

int hinhtron()
{
	system("CLS");
    float banKinh, chuVi, dienTich, PI = 3.14;
    printf("Moi ban nhap ban kinh cua hinh tron \n");
    scanf("%f", &banKinh);
    chuVi = banKinh * 2 * PI;
    dienTich = PI * pow(banKinh, 2);
    printf("Chu vi hinh tron la %f\n", chuVi);
    printf("Dien tich hinh tron la %f\n", dienTich);
    back();
}
