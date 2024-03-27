#include <stdio.h>
#include <stdlib.h>

int hcn()
{
	system("CLS");
    float dai, rong, chuVi, dienTich;
    printf("Moi ban nhap chieu dai va chieu rong cua hinh chu nhat\n");
    printf("chieu dai ");
    scanf("%f", &dai);
    printf("chieu rong ");
    scanf("%f", &rong);
    dienTich = dai * rong;
    chuVi = (dai + rong) / 2.0;
    printf("chu vi cua hinh chu nhat la %f\n", chuVi);
    printf("dien tich cua hinh chu nhat la %f\n", dienTich);
    back();
    
}
