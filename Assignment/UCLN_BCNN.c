#include <stdio.h>
#include <stdlib.h>
int ucln_bcnn() {
	system("CLS");
    int a, b;
    int ketqua;
    printf("Nhap vao 2 so de kiem tra UCLN va BCNN cua 2 so\n");
    printf("So thu nhat ");
    scanf("%d", & a);
    printf("So thu hai ");
    scanf("%d", & b);
    ketqua = UCLN(a, b);
    printf("UCLN la: %d\n", ketqua);
    ketqua = BCNN(a, b);
    printf("BCNN la: %d\n", ketqua);
    back();
}
int UCLN(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}
int BCNN(int a, int b) {
    int ketqua = UCLN(a, b);
    return (a * b) / ketqua;
}
