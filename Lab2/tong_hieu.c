#include <stdio.h>
#include <stdlib.h>

int tong_hieu()
{
	system("CLS");
    int a, b;

    printf("Moi ban nhap 2 so de tinh duoc tong va hieu\n");
    printf("So dau tien ");
    scanf("%d", &a);
    printf("So thu hai ");
    scanf("%d",&b);

    printf("Tong cua ban la %d\n", a + b);
    printf("Hieu cua ban la %d\n", a - b);
    back();
    return 0;
}
