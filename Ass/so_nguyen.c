#include <stdio.h>

int main()
{
    float a;
    printf("Nhap 1 so bat ky de kiem tra xem co phai so nguyen khong\n");
    scanf("%f", &a);
    if (a == (int)a)
        printf("%.0f la so nguyen", a);

    else
        printf("%.2f khong phai la so nguyen to", a);

    return 0;
}
