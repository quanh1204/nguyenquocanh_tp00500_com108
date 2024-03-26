#include <stdio.h>

int main(){
	int loan , loan_term=24, init_payment,total,loan_percent=80;
	float rate = 7.2,monthly_rate,monthly_payment; 
	printf("Ban muon vay bao nhieu tien");
	scanf("%d",&loan);
	loan = loan * loan_percent /100;
	init_payment = loan * (100-loan_percent) /100;
	monthly_rate = rate / 12 / 100;
    monthly_payment = loan * monthly_rate * pow((1 + monthly_rate), loan_term) / (pow((1 + monthly_rate), loan_term) - 1);
	total = monthly_payment * loan_term ;
	printf("So tien phai tra lan dau la: %d\n",init_payment);
	printf("So tien phai tra hang nam la: %.0f\n",monthly_payment);
	printf("Tong so tien phai tra la: %d\n",total);
}
