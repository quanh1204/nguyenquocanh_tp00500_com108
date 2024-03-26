#include <stdio.h>
#include "menu.h"
#include <stdlib.h>
int main() {
system("CLS");
  int option;
  printf(
      "+---------------------------------------------------+\n"
      "1. Kiem tra so nguyen\n"
      "2. Uoc so chung va boi so chung cua 2 so\n"
      "3. Tinh tien cho quan karaoke\n"
      "4. Tinh tien dien\n"
      "5. Doi tien\n"
      "6. Lai suat vay ngan hang\n"
      "7. Vay tien mua xe\n"
      "8. Sap xep thong tin sinh vien\n"
      "9. Mini game\n"
      "10. Toan phan so\n"
      "11. Them\n"
      "12. Thoat\n"
      "+---------------------------------------------------+\n"
      "Chon chuc nang: ");
  scanf("%d", &option);
  switch (option) {
    case 1:
      check();
      break;
    case 2:
      ucln_bcnn();
      break;
    case 3:
      karaoke();
      break;
    case 4:
      tien_dien();
      break;
    case 5:
      doi_tien();
      break;
    case 6:
      no_ngan_hang();
      break;
    case 7:
      vay_tien();
      break;
    case 8:
    	break;
    case 9:
    	break;
    case 10:
    	break;
    case 11:more();
    	break;
    case 12:
    	break;
    	
    default:
    	system("CLS");
    	printf("Vui long bam chon trong menu\n");
		main();
  }
}
