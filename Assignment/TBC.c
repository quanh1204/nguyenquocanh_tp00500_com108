#include <stdio.h>
int tbc(){

	 int i,count=0;
	 float tbc,tong;
	 printf("chuong trinh so tbc chia het cho 3 tu 1-20");
	 for(i=1; i<=20;i++){
	 	if(i%3==0){
	 		tong+=i;
	 		printf("cac so chia het cho 3 la: %d\n",i);
	 		count++;
		 }
	 }
	 tbc = tong/count;
	 printf("tbc la %f",tbc);
}
