#include <stdio.h>

int main() {
    int a, b;
    int ketqua;
    printf("Nhap vao 2 so de kiem tra UCLN va BCNN cua 2 so");
    scanf("%d", & a);
    scanf("%d", & b);
    ketqua = UCLN(a, b);
    printf("UCLN la:%d\n", ketqua);
    ketqua = BCNN(a, b);
    printf("BCNN la:%d", ketqua);
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
