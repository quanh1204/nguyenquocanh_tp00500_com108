#include <stdio.h>
//khai ba'o thu vien
int main(){
	//chay chuong trinh
	// chu' thi'ch
	/*chu' thi'ch nhieu do'ng*/
	//ca'c so tbc chia het cho 3 tu 1-20 la'
	//xa'c dinh duoc so chia het cho 3 
	/* 
	so i=1 count=0
	so thuc tbc, tong
	 */ 
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
	 //i<20 continue;
}
