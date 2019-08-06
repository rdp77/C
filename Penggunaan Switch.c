#include <stdio.h>
#include <conio.h>
int main()
{ char IP;
printf("Masukkan nilai huruf : ");
scanf("%c",&IP);
switch (IP)
{ case 'A' : printf("4");
break;
case 'B' : printf("3");
break;
case 'C' : printf("2");
break;
case 'D' : printf("1");
break;
case 'E' : printf("0");
break;
default : printf("Input salah");
}
getch();
return(0);
}
