#include <stdio.h>
main()
{
	char nama[10],kelas[20],jurusan[40],email[20];
	printf("Masukkan Nama : ");gets(nama);
	printf("Masukkan Kelas : ");gets(kelas);
	printf("Masukkan Jurusan : ");gets(jurusan);
	printf("Masukkan Email : ");gets(email);
	puts("=========================================");
	printf("Nama Anda Adalah %s,",nama);
	printf("Anda Termasuk Kedalam Kelas %s,",kelas);
	printf("Di Jurusan %s,",jurusan);
	printf("Dan Email Anda %s",email);
}
