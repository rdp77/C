# include <stdio.h>
main()
{
 int a, b, c, d, e, max, min, jumlah, rata;
printf("Masukan Bilangan A : ");scanf("%d",&a);
printf("Masukan Bilangan B : ");scanf("%d",&b);
printf("Masukan Bilangan C : ");scanf("%d",&c);
printf("Masukan Bilangan D : ");scanf("%d",&d);
printf("Masukan Bilangan E : ");scanf("%d",&e);
if (a>b) {max=a; min=b;}
else
{max=b; min=a;}
if (a>max) max=a;
if (a<min) min=a;
if (b>max) max=b;
if (b<min) min=b;
if (c>max) max=c;
if (c<min) min=c;
if (d>max) max=d;
if (d<min) min=d;
if (e>max) max=e;
if (e<min) min=e;
(jumlah=a+b+c+d+e);
(rata=jumlah/5);
printf("==========================================================");
printf("\nBilangan Terbesar Adalah %d\n",max);
printf("Bilangan Terkecil Adalah %d\n",min);
printf("Total Dari Bilangan Tersebut Adalah %d\n",jumlah);
printf("Rata Rata Dari Bilangan Adalah %d",rata);
getch();
}
