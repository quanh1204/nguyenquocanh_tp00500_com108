#include <stdio.h>
#include <stdlib.h>

int menu()
{
	system("CLS");
    int option;

    printf("+---------------------------------------------------+\n"
           "1. Tinh tong va hieu\n"
           "2. Chu vi, dien tich hinh chu nhat\n"
           "3. Chu vi dien tich hinh tron\n"
           "4. Tinh diem trung binh\n"
           "5. Ket thuc\n"
           "+---------------------------------------------------+\n"
           "Chon chuc nang: ");

    scanf("%d", &option);

    switch (option)
    {
    case 1:tong_hieu();
        break;

    case 2:
        hcn();
        break;
    case 3:
        hinhtron();
        break;
    case 4:
        break;
    case 5:
        break;
    default:
    system("CLS");
    printf("Vui long bam chon trong menu\n");
    menu();
        break;
    }

    return 0;
}
