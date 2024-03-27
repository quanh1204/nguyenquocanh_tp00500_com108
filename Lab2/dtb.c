#include <stdio.h>
#include <stdlib.h>

int dtb()
{
	system("CLS");
    float toan, ly, hoa;
    printf("Moi ban nhap diem cua mon Toan\n");
    scanf("%f", &toan);
    printf("Moi ban nhap diem cua mon Ly\n");
    scanf("%f", &ly);
   printf("Moi ban nhap diem cua mon Hoa\n");
    scanf("%f", &hoa);
    toan = toan * 3;
    ly = ly * 2;
    printf("diem trung binh %f\n", (toan + ly + hoa) / 6);
    
    back();
}
