#include <stdio.h>

int main() {
  int amount[] = {1000, 2000, 5000, 10000, 20000, 50000, 100000, 200000, 500000};
  int cash, i;
  int counts[sizeof(amount) / sizeof(amount[0])];
  int amount_length =sizeof(amount) / sizeof(amount[0]);
  
  for (i = 0; i < amount_length; i++) 
    counts[i]=0;
   //cho mang counts[i] voi tat ca phan tu =0 khi do  cac phan tu dem lai tu con so 0
  printf("Moi ban nhap vao so tien can doi\n");
  scanf("%d", & cash);
  for (i = amount_length - 1; i >= 0; i--) {
    while (cash >= amount[i]) {
      counts[i]++;
      cash -= amount[i];
    }
  }
  printf("So tien cho moi menh gia la:\n");
  for (i = 0; i < amount_length; i++)
    printf("%d : %d\n", amount[i], counts[i]);
}
//suggets: https://www.geeksforgeeks.org/length-of-array-in-c/
