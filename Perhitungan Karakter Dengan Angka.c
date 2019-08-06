#include <stdio.h>
#include <string.h>

int main()	   	   
{
	  int a=0;
      int b=0;
      int c=0;
      int d=0;
      int e=0;
      int f=0;
      int g=0;
      int h=0;
      int i=0;
      int j=0;
      int k=0;
      int l=0;
      int m=0;
      int n=0;
      int o=0;
      int p=0;
      int q=0;
      int r=0;
      int s=0;
      int t=0;
      int u=0;
      int v=0;
      int w=0;
      int x=0;
      int y=0;
      int z=0;
	  
	  int hasil; 
  	  int mzi;
  	  int mz;
	  
	  char inputan[100];

printf("masukkan nama anda : ");
gets(inputan);
	
	mzi=strlen(inputan);
    for(mz=0;mz<mzi;mz++)
     {
    	if(inputan[mz]=='a')
        a++;
        if(inputan[mz]=='b')
        b++;
        if(inputan[mz]=='c')
        c++;
        if(inputan[mz]=='d')
        d++;
        if(inputan[mz]=='e')
        e++;
        if(inputan[mz]=='f')
        f++;
        if(inputan[mz]=='g')
        g++;
        if(inputan[mz]=='h')
        h++;
        if(inputan[mz]=='i')
        i++;
        if(inputan[mz]=='j')
        j++;
        if(inputan[mz]=='k')
        k++;
        if(inputan[mz]=='l')
        l++;
        if(inputan[mz]=='m')
        m++;
        if(inputan[mz]=='n')
        n++;
        if(inputan[mz]=='o')
        o++;
        if(inputan[mz]=='p')
        p++;
        if(inputan[mz]=='q')
        q++;
        if(inputan[mz]=='r')
        r++;
        if(inputan[mz]=='s')
        s++;
        if(inputan[mz]=='t')
        t++;
        if(inputan[mz]=='u')
        u++;
        if(inputan[mz]=='v')
        v++;
        if(inputan[mz]=='w')
        w++;
        if(inputan[mz]=='x')
        x++;
        if(inputan[mz]=='y')
        y++;
        if(inputan[mz]=='z')
        z++;
 	}

a=a*1;	
b=b*2;
c=c*3;	
d=d*4;
e=e*5;	
f=f*6;
g=g*7;	
h=h*8;
i=i*9;	
j=j*10;
k=k*11;	
l=l*12;
m=m*13;	
n=n*14;
o=o*15;	
p=p*16;
q=q*17;	
r=r*18;
s=s*19;	
t=t*20;
u=u*21;	
v=v*22;
w=w*23;	
x=x*24;
y=y*25;	
z=z*26; 

hasil=a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z; 	    

printf("Jumlah Nama Anda : %d",hasil);
}
