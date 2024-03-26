#include <stdio.h>

int main(){
	int soDien;
	float total;
	printf("Moi ban nhap so kWh su dung\n");
	scanf("%d",&soDien);
	if (soDien <= 50)
        total = soDien * 1.678;
    else if (soDien <= 100)
        total = 50 * 1.678 + (soDien - 50) * 1.734;
    else if (soDien <= 200)
        total = 50 * 1.678 + 50 * 1.734 + (soDien - 100) * 2.014;
    else if (soDien <= 300)
        total = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soDien - 200) * 2.536;
    else if (soDien <= 400)
        total = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soDien - 300) * 2.834;
    else
        total = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soDien - 400) * 2.927;
        
     printf("So tien can thanh toan: %.3f dong ", total);

}
