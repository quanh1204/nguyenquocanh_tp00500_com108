#include <stdio.h>
#include <math.h>

int main()
{
    menu();
    return 0;
}

int menu(){
    int option;
    printf("+---------------------------------------------------+\n"
           "1. Tinh hoc luc\n"
           "2. Giai phuong trinh\n"
           "3. Tinh tien dien\n"
           "4. Ket thuc\n"
           "+---------------------------------------------------+\n"
           "Chon chuc nang: ");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
        hoc_luc();
        break;

    case 2:
        giai_phuong_trinh();
        break;
    case 3:
        tien_dien();
        break;
    case 4:printf("cam on ban da su dung chuong trinh");
        break;
    default:
    printf("Vui long bam chon trong menu\n");
        break;
    }

    return 0;
}
  
int hoc_luc()
{
    float diem;
    printf("moi ban nhap diem\n");
    scanf("%f", &diem);
    if (diem < 9 && diem <= 10)
    {
        if (diem <= 8)
        {
            if (diem <= 6.5)
            {
                if (diem <= 5)
                {
                    if (diem <= 3.5)
                    {
                        printf("hoc luc kem");
                    }
                    else
                        printf("hoc luc yeu");
                }
                else
                    printf("hoc luc trung binh");
            }
            else
                printf("hoc luc kha");
        }
        else
            printf("hoc luc gioi");
    }
    else
        printf("hoc luc xuat sac");
    return 0;
}
int giai_phuong_trinh()
{
    // phuong trinh bac nhat co dang ax+b=0
    // phuong trinh bac 2 co dang ax^2+bx+c=0
    float a, b, c, x, delta, x1, x2;
    int option;
    printf("+---------------------------------------------------+\n"
           "1. Phuong trinh bac nhat\n"
           "2. Phuong trinh bac hai\n"
           "+---------------------------------------------------+\n"
           "Chon chuc nang: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("vui long nhap gia tri a\n");
        scanf("%f", &a);
        printf("vui long nhap gia tri b\n");
        scanf("%f", &b);

        if (a != 0)
        {
            x = -b / a;
            printf("phuong trinh co nghiem x= %.2f", x);
        }
        else
        {
            if (b == 0)
            {
                printf("phuog trinh co vo so nghiem");
            }
            else
            {
                printf("phuong trinh vo nghiem");
            }
        }
        break;
    case 2:
        printf("vui long nhap gia tri a\n");
        scanf("%f", &a);
        printf("vui long nhap gia tri b\n");
        scanf("%f", &b);
        printf("vui long nhap gia tri c\n");
        scanf("%f", &c);
        if (a != 0)
        {
            delta = pow(b, 2) - (4 * a * c);
            if (delta >= 0)
            {
                if (delta > 0)
                {
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("nghiem cua phuong trinh x1 = %.2f", x1);
                    printf("nghiem cua phuong trinh x2 = %.2f", x2);
                }
                if (delta == 0)
                {
                    x = -b / (2 * a);
                    printf("phuong trinh co nghiem kep x= %.2f", x);
                }
            }
            else
            {
                printf("phuong trinh vo nghiem");
            }
        }
        else
        {
            x = -b / a;
            printf("phuong trinh co nghiem x= %.2f", x);
        }
        break;
    default:
        break;
    }
    return 0;
}
int tien_dien()
{
    int soDien;
    float soTienDien;

    printf("Nhập số điện tiêu thụ: ");
    scanf("%d", &soDien);

  
    if (soDien <= 50)
    {
        soTienDien = soDien * 1.678;
    }
    else if (soDien <= 100)
    {
        soTienDien = 50 * 1.678 + (soDien - 50) * 1.734;
    }
    else if (soDien <= 200)
    {
        soTienDien = 50 * 1.678 + 50 * 1.734 + (soDien - 100) * 2.014;
    }
    else if (soDien <= 300)
    {
        soTienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soDien - 200) * 2.536;
    }
    else if (soDien <= 400)
    {
        soTienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soDien - 300) * 2.834;
    }
    else
    {
        soTienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soDien - 400) * 2.927;
    }

    // Hiển thị kết quả
    printf("Số tiền cần thanh toán: %.2f đồng ", soTienDien);

    return 0;
}
