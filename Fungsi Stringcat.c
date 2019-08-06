#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{ 
char satu[30] = "Fakultas Teknologi Informasi";
char dua[30] = "Universitas Budi Luhur";
strcat(satu, dua);

printf("Hasil penggabungannya : %s\n",&satu);
printf("Jika diubah menjadi huruf kapital semua :\n");
printf("%s", strupr(satu));
printf("Jika diubah menjadi huruf kecil semua :\n");
printf("%s", strlwr(satu));
getch();
}
