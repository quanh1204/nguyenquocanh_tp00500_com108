#include <stdio.h>
#include "menu.h"
#include <stdlib.h>
int check(){
	system("CLS");
	int option;
	printf(
      "+---------------------------------------------------+\n"
      "1. Kiem tra so nguyen\n"
      "2. Kiem tra so nguyen to\n"
      "3. Kiem tra so chinh phuong\n"
      "+---------------------------------------------------+\n"
      "Chon chuc nang: ");
  scanf("%d", &option);
  switch(option){
  	case 1:
  		so_nguyen();
  		break;
  	case 2:
  		soNguyenTo();
  		break;
  	case 3:
  		so_chinh_phuong();
  		break;
  	default:
  		system("CLS");
  		printf("Ban chon khong phu hop trong menu moi ban nhap lai:");
  		check();
  		
  }
}
