#include <stdio.h>

int main()
{
    menu();
    return 0;
}
int menu()
{
    int option;

    printf("+---------------------------------------------------+\n"
           "1. Tinh trung binh tong\n"
           "2. Tim so nguyen to\n"
           "3. Tim so chinh phuong\n"
           "4. Thoat\n"
           "+---------------------------------------------------+\n"
           "Chon chuc nang: ");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
        trungBinhTong();
        break;

    case 2:
        soNguyen();
        break;
    case 3:
        soChinhPhuong();
        break;
    case 4:
        break;
    default:
        printf("Vui long bam chon trong menu\n");
    }

    return 0;
}
int trungBinhTong()
{
    int min, max;
    int i = min;
    float tong = 0, count = 0, trungBinh = 0;
    printf("ban nhap 2 gia tri min, max \n");
    scanf("%d%d", &min, &max);
    for (int i = min; i <= max; i++)
    {
        if (i % 2 == 0)
        {
            tong += i;
            count++;
        }
    }

    trungBinh = tong / count;
    printf("trung binh tong cua cac so tu nhien chia het cho 2 tu min toi max la %.2f", trungBinh);
    return 0;
}
int soNguyen()
{
    int soNguyenTo, count = 0;
    printf("Nhap vao mot so nguyen");
    scanf("%d", &soNguyenTo);
    for (int i = 2; i < soNguyenTo; i++)
    {
        if (soNguyenTo % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("so nguyen to %d", soNguyenTo);
    }
    else
    {
        printf("khong phai so nguyen to%d", soNguyenTo);
    }
    return 0;
}
int soChinhPhuong()
{
    int x;
    printf("Nhap mot so chinh phuong ");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        if (i * i == x)
        {
            printf("%d", x);
            printf(" la so chinh phuong");
            break;
        }
    }

    return 0;
}