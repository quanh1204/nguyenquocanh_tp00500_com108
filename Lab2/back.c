#include <stdio.h>

#include <stdlib.h>
int back(){

	int option;
	printf(
      "+---------------------------------------------------+\n"
      "1. Quay ve menu\n"
      "2. Thoat\n"
      "+---------------------------------------------------+\n"
      "Chon chuc nang: ");
  scanf("%d", &option);
  switch(option){
  	case 1:
  		main();
  		break;
  	case 2:
  		break;
  	default:
  		system("CLS");
  		printf("Ban chon khong phu hop trong menu moi ban nhap lai:");
  		back();
  		
  }
}
