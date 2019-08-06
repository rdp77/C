#include <stdio.h>
#include <conio.h>
main()
{
	int pilihan;
	puts("Masukkan Pilihan 1 - 3");
	scanf("%d",&pilihan);
	while(""){
	switch(pilihan) {
		case 1:
			{
	printf("Nama Moh Ravi Dwi Putra,");
	printf("Kelas XI TKJ 1,");
	printf("Jurusan Teknik Komputer Dan Jaringan,");
	printf("Email ravidwiputra@gmail.com@gmail.com");
	printf("\n==========================================");
}
switch (pilihan)
break;
case 2:
{
		char nama[30]; 
	char kelas[10];
	char jurusan[15];
	char email[30];
	printf("\n Masukan Nama Anda = ");scanf("%s",&nama);
	printf("\n Masukan Kelas Anda = ");scanf("%s",&kelas);
	printf("\n Masukan Jurusan Anda = ");scanf("%s",&jurusan);
	printf("\n Masukan Email Anda = ");scanf("%s",&email);
	printf("------------------------------------------------ \n");	
	printf("Nama Anda Adalah %s,",nama);
	printf("Kelas %s,",kelas);
	printf("Di Jurusan %s,",jurusan);
	printf("Dan Email %s \n",email);
    printf("=============================================== \n");
	getch();
}
switch (pilihan)
break;
case 3:
	{
		char kar,kata;
	int jkar = 0;
	int jspasi = 0;
	
	printf("\tMasukkan Kata : ");
	scanf("%d",&kata);
	while((kar = getchar()) !='\n'){
		jkar++;
		if(kar== ' ') jspasi++;
    }
	printf("\n\tJumlah Karakter\t=%i",jkar);
	printf("\n\tJumlah Spasi\t=%i\n",jspasi);
	printf("=============================================== \n");
	}
switch (pilihan);
break;
default: printf("Inputan Tidak Ada Masukkan Angka 1-3");
return 0;
}}
}
