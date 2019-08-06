#include <stdio.h>
main()
{
	char kar;
	int jk=0,js=0;
	
	printf("Masukkan Karakter Yang Akan Dihitung : ");

	while((kar = getchar()) !='\n'){
		jk++;
		if (kar == ' ') js++;
	}
	puts("==============================");
	printf("Jumlah Karakter = %i",jk);
	printf("\nJumlah Spasi = %i",js);
}
