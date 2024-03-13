#include <stdio.h>
#include <math.h>
int main()
{
    menu();
    return 0;
}

int menu()
{
    int chucnang;

    printf("+---------------------------------------------------+\n"
           "1. Chuong trinh 2 so\n"
           "2. Chu vi, dien tich hinh chu nhat\n"
           "3. Chu vi dien tich hinh tron\n"
           "4. Tinh diem trung binh\n"
           "5. Ket thuc\n"
           "+---------------------------------------------------+\n"
           "Chon chuc nang: ");

    scanf("%d", &chucnang);

    switch (chucnang)
    {
    case 1:
        bai1();
        break;

    case 2:
        bai2();
        break;
    case 3:
        bai3();
        break;
    case 5:
        break;
    default:
    printf("Vui long bam chon trong menu\n");
        break;
    }

    return 0;
}

int bai1()
{
    int a, b;

    printf("Moi ban nhap 2 so de tinh duoc tong va hieu\n");
    scanf("%d%d", &a, &b);

    printf("Tong cua ban la %d\n", a + b);
    printf("Hieu cua ban la %d\n", a - b);

    return 0;
}

int bai2()
{
    float dai, rong, chuVi, dienTich;
    printf("Moi ban nhap chieu dai va chieu rong cua hinh chu nhat\n");
    scanf("%f%f", &dai, &rong);
    dienTich = dai * rong;
    chuVi = (dai + rong) / 2.0;
    printf("chu vi cua hinh chu nhat la %f\n", chuVi);
    printf("dien tich cua hinh chu nhat la %f\n", dienTich);
    return 0;
}
int bai3()
{
    float banKinh, chuVi, dienTich, PI = 3.14;
    printf("Moi ban nhap ban kinh cua hinh tron \n");
    scanf("%f", &banKinh);
    chuVi = banKinh * 2 * PI;
    dienTich = PI * pow(banKinh, 2);
    printf("Chu vi hinh tron la %f\n", chuVi);
    printf("Dien tich hinh tron la %f", dienTich);
}
int bai4()
{
    float toan, ly, hoa;
    printf("Moi ban nhap diem cua mon Toan, Ly, Hoa\n");
    scanf("%f%f%f", &toan, &ly, &hoa);
    toan = toan * 3;
    ly = ly * 2;
    printf("diem trung binh %f", (toan + ly + hoa) / 6);
    return 0;
}