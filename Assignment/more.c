#include <stdio.h>
#include <stdlib.h>
int more(){
	system("CLS");
	int choice;
	printf(
      "+---------------------------------------------------+\n"
      "1. Tat may tinh\n"
      "2. Khoa may tinh\n"
      "3. Ve con vet\n"
      "+---------------------------------------------------+\n"
	  );
	  scanf("%d",&choice);
	switch(choice){
		case 1:
			system("shutdown -p -f");
		case 2:
			system("Rundll32.exe user32.dll,LockWorkStation");
		case 3:
			system("color a");
			system("curl parrot.live");
	}
}
