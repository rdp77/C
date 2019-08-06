#include <stdio.h>
main()
{
char kata[50];
int i,temu=0;
char cari;

printf("Masukan Kata Pertama : ");
scanf("%c",kata);
printf("Masukan kata kedua : ");
scanf("%c",kata);
printf("Masukan huruf untuk di bandingkan  : ");
scanf("%c",&cari);
for(i=0;kata[i]!='\0';i++) {
if(cari == kata[i]) temu++; }



if (temu!=0)
printf("\nBanyaknya huruf %d dan Huruf yang ada '%c' dari ke-dua kata diatas ! ",temu,cari);
else
printf ("\nHuruf yang diminta tidak ditemukan pada kedua kata diatas ! ");
getch();
}
