#include <stdio.h>
#include <stdlib.h>
int karaoke() {
	system("CLS");
  int start_hours, end_hours, hours;
  float cash = 50000, discount, total;
  printf("Moi ban di vao luc may gio va ket thuc may gio\n");
  printf("Gio bat dau ");
  scanf("%d", &start_hours);
  printf("Gio ket thuc ");
  scanf("%d", &end_hours);
  hours = end_hours - start_hours;

  if (start_hours >= 12 && end_hours <= 23) {
    if (hours <= 3) {
      total = cash * hours;
    } else {
      total = cash * 3 + ((hours - 3) * cash * (1 - 0.3));
      //Do phai tinh 3h dau nen cash *3, gio phai-di 3 de tinh ra discount
    }
  }
  if (start_hours >= 14 && start_hours <= 17) {
    discount = total * 0.1;
  }
  total -= discount;
  printf("Tong ban can thanh toan la: %.0f\n", total);
  back();
}
