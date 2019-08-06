#include <stdio.h>
main()
{
	char jurusan;
	puts("Nama	: Moh Ravi Dwi Putra");
	puts("kelas	: XI-TKJ1");
	puts("Absen	: 24");	
	puts("---------------------------------");
	puts("Masukkan Pilihan Jurusan A-F");
	while("") {
	scanf("\n%c",&jurusan); 
	if (jurusan == 'A')
		{printf("Jurusan TKJ ==> ");}
	else if (jurusan == 'B')
		{printf("Jurusan AK ==> ");}
	else if (jurusan == 'C')
		{printf("Jurusan TITL ==> ");}
	else if (jurusan == 'D')
		{printf("Jurusan TPM ==> ");}
	else if (jurusan == 'E')
		{printf("Jurusan APK ==> ");}
	else if (jurusan == 'F')
		{printf("Jurusan TKR ==> ");}
	else {printf("Tolong Masukkan Huruf A-F Dan Bukan Yang Lainnya!! ==> ");} 
	}
}
