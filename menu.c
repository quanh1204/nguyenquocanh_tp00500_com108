#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
     menu();
    return 0;
}

int menu(){
	
    int option;
    printf("+---------------------------------------------------+\n"
           "1. Tinh hoc luc\n"
           "2. Giai phuong trinh\n"
           "3. Tinh tien dien\n"
           "4. Ket thuc\n"
           "+---------------------------------------------------+\n"
           "Chon chuc nang: ");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
         hoc_luc();
        break;

    case 2:
         giai_phuong_trinh();
        break;
    case 3:
         tien_dien();
        break;
    case 4:printf("cam on ban da su dung chuong trinh");
        break;
    default:
    	system("CLS");
    printf("Vui long bam chon trong menu\n");
    menu();
        break;
    }

    return 0;
}
int hoc_luc()
{
    float x;
	printf("vui long ban nhap diem trung binh cua ban");
	scanf("%f",&x);
	if(x<3.5){
		printf("xin chia buon voi ban da dat hoc luc kem");
	}
		else if (x<=5){ 
		printf ("xin chia buon voi ban da dat hoc sinh yeu");
		}	
		else if(x<=6.5){
		printf ("xin chia buon voi ban da da hoc sinh trung binh");
		}	
		else if(x<=8){
		printf ("xin chuc mung ban da dat hoc sinh kha");
		}
		else if(x<=9){
		printf("xin chuc mung ban da dat hoc sinh gioi");
		}
		else if(x<=10){
		printf("xin chuc mung ban da dat hoc luc xuat sac");
		}
	else 
	printf("diem ban khong hop le, moi ban nhap lai");
	return 0;
} 
int giai_phuong_trinh()
{
    // phuong trinh bac nhat co dang ax+b=0
    // phuong trinh bac 2 co dang ax^2+bx+c=0
    float a, b, c, delta, x, y, z;
    int option;
    printf("+---------------------------------------------------+\n"
           "1. Phuong trinh bac nhat\n"
           "2. Phuong trinh bac hai\n"
           "+---------------------------------------------------+\n"
           "xin oi ban chon chuc nang:\n ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
         printf("moi ban nhap du lieu phuong trinh bac mot\n");
	  printf("moi ban nhap cho chung toi gia tri a ");
	scanf("%f",&a);
	  printf("moi ban nhap cho chung toi gia tri b");
	scanf("%f",&b);
	if(a==0){
		if(b==0){
	  printf("vay phuong trinh co vo so nghiem");
    }
		else if(b!=0){
	  printf("vay phuong trinh vo nghiem");
	}
	    }else if(a!=0){
		if(b!=0){
			printf("Phuong trinh co nghiem x=%f",-b/a);
        }
    }
        break;
    case 2:
        	printf("\nXin moi ban nhap gia tri a:");
	 scanf("%f",&a);
	printf("\nXin moi ban nhap gia tri b:");
	 scanf("%f",&b);
	printf("\nXin moi ban nhap gia tri c:");
	 scanf("%f",&c);
	if(a==0){
		if(b==0 && c!=0){
		     printf("vay thi phuong trinh vo nghiem\n");
		}else if(b==0&&c==0){
		     printf("Vay thi phuong trinh vo so nghiem\n");
		}else{  x=-c/b;
		     printf("Vay thi phuong trinh co mot nghiem duy nhat:%0.2f", x);
	}
}
   delta = b*b-4*a*c;
   if(delta<0){
	 printf("Delta = %0.2f", delta);
   	 printf("\nVay thi phuong trinh vo nghiem");
}
   else if(delta==0){
   y = z = -b/(2*a);
	 printf("Delta = %0.2f",delta);
	 printf("\nVay thi phuong trinh chi co mot nghiem duy nhat x1=x2=%.2f",y);
    }
   else{
	y = (-b + sqrt(delta))/(2*a);
	z = (-b - sqrt(delta))/(2*a);
	printf("\nVay thi phuong trinh co hai ngiem phan biet la:%f va %f", x, y);
     }
        break;
    default:
        break;
    }
    return 0;
}
int tien_dien()
{
    float a, b, c, d , e, f;
	printf("Nhap so dien hang thang: ");
	scanf("%f", &a);
	b=50*1500;
	c=50*2000;
	d=100*2500;
	e=100*3000;
	f=100*3500;
	if (a<0)
	{
		printf("so dien khong the nho hon o");
	}
	else if (a<=50)
	{
		printf("so dien phai tra la: %.0f * 1500 = %.0f.VND", a, a*1500);
	}
	else if (a<=100)
	{
		printf("so dien phai tra la: \n");
		printf("50 * 1500 = %.0f.VND\n", b);
		printf("%.0f * 2000 = %.0f.VND\n", a-50 , (a-50)*2000);
		printf("Tong: %.0f.VND", b+(a-50)*2000);
	}
	else if (a<=200)
	{
		printf("so dien phai tra la: \n");
		printf("50 * 1500 = %.0f.VND\n", b);
		printf("50 * 2000 = %.0f.VND\n", c);
		printf("%.0f * 2500 = %.0f.VND\n", a-100 , (a-100)*2500);
		printf("Tong: %.0.VNDf", b+c+(a-100)*2500);
	}
	else if (a<=300)
	{
		printf("so dien phai tra la: \n");
		printf("50 * 1500 = %.0f.VND\n", b);
		printf("50 * 2000 = %.0f.VND\n", c);
		printf("100 * 3000 = %.0f.VND\n", d);
		printf("%.0f * 2500 = %.0f.VND\n", a-200 , (a-200)*3000);
		printf("Tong: %.0f.VND", b+c+d+(a-200)*3000);
	}
	else if (a<=400)
	{
		printf("so dien phai tra la: \n");
		printf("50 * 1500 = %.0f.VND\n", b);
		printf("50 * 2000 = %.0f.VND\n", c);
		printf("100 * 3000 = %.0f.VND\n", d);
		printf("100 * 3500 = %0.f.VND\n", e);
		printf("%.0f * 2500 = %.0f.VND\n", a-300 , (a-300)*3500);
		printf("Tong: %.0f.VND", b+c+d+e+(a-300)*3500);
	}
	else if(a>400)
	{
		printf("so dien phai tra la: \n");
		printf("50 * 1500 = %.0f.VND\n", b);
		printf("50 * 2000 = %.0f.VND\n", c);
		printf("100 * 3000 = %.0f.VND\n", d);
		printf("100 * 3500 = %0.f.VND\n", e);
		printf("100 * 4000 = %0.f.VND\n", f);
		printf("%.0f * 2500 = %.0f.VND\n", a-400 , (a-400)*4000);
		printf("Tong: %.0f.VND", b+c+d+e+f+(a-400)*4000);
	}
	return 0;
}
