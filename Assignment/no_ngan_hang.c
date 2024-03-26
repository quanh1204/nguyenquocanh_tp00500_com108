#include <stdio.h>
#include <stdlib.h>
int no_ngan_hang() {
	system("CLS");
  int loan, remain, month_pay, month_amount, count;
  float rate = 0.05, money_months;
  printf("Ban muon vay so tien bao nhieu ");
  scanf("%d", & loan);
  money_months = loan / 12;
  remain = loan;
  for (count = 1; count <= 12; count++) {
    month_pay = remain * rate;
    month_amount = money_months + month_pay;
    remain = remain - money_months;
    printf("Ki han %d:\n", count);
    printf("Lai suat phai tra: %d VND\n", month_pay);
    printf("Goc phai tra: %.0f VND\n", money_months);
    printf("So tien phai tra: %d VND\n", month_amount);
    printf("So tien con lai: %d VND\n", remain);
  }
  back();
}
