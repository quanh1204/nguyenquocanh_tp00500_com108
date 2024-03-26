#include <stdio.h>
#include <stdlib.h>

int soNguyenTo()
{
	system("CLS");
    int count = 0,i,nguyen_to;
    printf("Moi ban nhap so vao de kiem tra\n");
    scanf("%d", &nguyen_to);
    
    	if (nguyen_to < 2)
    {
        printf("%d khong phai so nguyen to\n", nguyen_to);
        return 0;
    }

    for (i = 2; i < nguyen_to; i++)
    {
        if (nguyen_to % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\n%d la so nguyen to\n", nguyen_to);
    }
    else
    {
        printf("\n%d khong phai so ngyen to\n", nguyen_to);
    }
	back();
    
}
