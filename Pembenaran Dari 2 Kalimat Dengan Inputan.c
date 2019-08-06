#include <stdio.h>
#include <string.h>

int main()
{
      int mz;
	  int mzi;

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
	  
	  int a1=0;
      int b1=0;
      int c1=0;
      int d1=0;
      int e1=0;
      int f1=0;
      int g1=0;
      int h1=0;  
      int i1=0;
      int j1=0;
      int k1=0; 
      int l1=0; 
      int m1=0;  
      int n1=0;
      int o1=0;
      int p1=0;
      int q1=0;
      int r1=0;
      int s1=0;
      int t1=0;
      int u1=0;
      int v1=0; 
      int w1=0; 
      int x1=0;
      int y1=0;
      int z1=0;          
      
      int a2=0;
      int b2=0;
      int c2=0;
      int d2=0;
      int e2=0;
      int f2=0;
      int g2=0;
      int h2=0;  
      int i2=0;
      int j2=0;
      int k2=0; 
      int l2=0; 
      int m2=0;  
      int n2=0;
      int o2=0;
      int p2=0;
      int q2=0;
      int r2=0;
      int s2=0;
      int t2=0;
      int u2=0;
      int v2=0; 
      int w2=0; 
      int x2=0;
      int y2=0;
      int z2=0;          

      char kalimat1[200];
      char kalimat2[200];
	     
   printf ("PROGRAM MENGHITUNG JUMLAH HURUF");
   
   printf ("\n");   
   printf ("\n");
   
   printf ("silahkan masukkan kalimat 1 :\n");
            gets(kalimat1);
   
   printf ("\n");   
   
   printf ("silahkan masukkan kalimat 2 :\n");
            gets(kalimat2);

	  mzi=strlen(kalimat1);
      for(mz=0;mz<mzi;mz++)
            {
              if(kalimat1[mz]=='a')
            a1++;
			else if (kalimat1[mz]=='b')
            b1++;
            else if (kalimat1[mz]=='c')
            c1++;
            else if (kalimat1[mz]=='d')
            d1++;
            else if (kalimat1[mz]=='e')
            e1++;
            else if (kalimat1[mz]=='f')
            f1++;
            else if (kalimat1[mz]=='g')
            g1++;
            else if (kalimat1[mz]=='h')
            h1++;
            else if (kalimat1[mz]=='i')
            i1++;
            else if (kalimat1[mz]=='j')
            j1++;
            else if (kalimat1[mz]=='k')
            k1++;
            else if (kalimat1[mz]=='l')
            l1++;
            else if (kalimat1[mz]=='m')
            m1++;
            else if (kalimat1[mz]=='n')
            n1++;
            else if (kalimat1[mz]=='o')
            o1++;
            else if (kalimat1[mz]=='p')
            p1++;
            else if (kalimat1[mz]=='q')
            q1++;
            else if (kalimat1[mz]=='r')
            r1++;
            else if (kalimat1[mz]=='s')
            s1++;
            else if (kalimat1[mz]=='t')
            t1++;
            else if (kalimat1[mz]=='u')
            u1++;
            else if (kalimat1[mz]=='v')
            v1++;
            else if (kalimat1[mz]=='w')
            w1++;
            else if (kalimat1[mz]=='x')
            x1++;
            else if (kalimat1[mz]=='y')
            y1++;
            else if (kalimat1[mz]=='z')
            z1++;
            }
      
      mzi=strlen(kalimat2);
      for(mz=0;mz<mzi;mz++)
            {
              if(kalimat2[mz]=='a')
            a2++;
			else if (kalimat2[mz]=='b')
            b2++;
            else if (kalimat2[mz]=='c')
            c2++;
            else if (kalimat2[mz]=='d')
            d2++;
            else if (kalimat2[mz]=='e')
            e2++;
            else if (kalimat2[mz]=='f')
            f2++;
            else if (kalimat2[mz]=='g')
            g2++;
            else if (kalimat2[mz]=='h')
            h2++;
            else if (kalimat2[mz]=='i')
            i2++;
            else if (kalimat2[mz]=='j')
            j2++;
            else if (kalimat2[mz]=='k')
            k2++;
            else if (kalimat2[mz]=='l')
            l2++;
            else if (kalimat2[mz]=='m')
            m2++;
            else if (kalimat2[mz]=='n')
            n2++;
            else if (kalimat2[mz]=='o')
            o2++;
            else if (kalimat2[mz]=='p')
            p2++;
            else if (kalimat2[mz]=='q')
            q2++;
            else if (kalimat2[mz]=='r')
            r2++;
            else if (kalimat2[mz]=='s')
            s2++;
            else if (kalimat2[mz]=='t')
            t2++;
            else if (kalimat2[mz]=='u')
            u2++;
            else if (kalimat2[mz]=='v')
            v2++;
            else if (kalimat2[mz]=='w')
            w2++;
            else if (kalimat2[mz]=='x')
            x2++;
            else if (kalimat2[mz]=='y')
            y2++;
            else if (kalimat2[mz]=='z')
            z2++;
            }
      
   	  printf("\n");
      printf("\n");
      printf("Jumlah huruf yang sama pada kalimat 1 dan 2 adalah : \n");
	  printf("\n");
	
	if(a1>0 && a2<0){
 		a=0;
	}
	if(a1<0 && a2>0){
 		a=0;
	}
	if(a1>0 && a2>0){
 		a=a1+a2;
	}
	
		if(b1>0 && b2<0){
 		b=0;
	}
	if(b1<0 && b2>0){
 		b=0;
	}
	if(b1>0 && b2>0){
 		b=b1+b2;
	}
	
		if(c1>0 && c2<0){
 		c=0;
	}
	if(c1<0 && c2>0){
 		c=0;
	}
	if(c1>0 && c2>0){
 		c=c1+c2;
	}
	
		if(d1>0 && d2<0){
 		d=0;
	}
	if(d1<0 && d2>0){
 		d=0;
	}
	if(d1>0 && d2>0){
 		d=d1+d2;
	}
	
		if(e1>0 && e2<0){
 		e=0;
	}
	if(e1<0 && e2>0){
 		e=0;
	}
	if(e1>0 && e2>0){
 		e=e1+e2;
	}
	
		if(f1>0 && f2<0){
 		f=0;
	}
	if(f1<0 && f2>0){
 		f=0;
	}
	if(f1>0 && f2>0){
 		f=f1+f2;
	}
	
		if(g1>0 && g2<0){
 		g=0;
	}
	if(g1<0 && g2>0){
 		g=0;
	}
	if(g1>0 && g2>0){
 		g=g1+g2;
	}
	
		if(h1>0 && h2<0){
 		h=0;
	}
	if(h1<0 && h2>0){
 		h=0;
	}
	if(h1>0 && h2>0){
 		h=h1+h2;
	}
	
		if(i1>0 && i2<0){
 		i=0;
	}
	if(i1<0 && i2>0){
 		i=0;
	}
	if(i1>0 && i2>0){
 		i=i1+i2;
	}
	
		if(j1>0 && j2<0){
 		j=0;
	}
	if(j1<0 && j2>0){
 		j=0;
	}
	if(j1>0 && j2>0){
 		j=j1+j2;
	}
	
		if(k1>0 && k2<0){
 		k=0;
	}
	if(k1<0 && k2>0){
 		k=0;
	}
	if(k1>0 && k2>0){
 		k=k1+k2;
	}
	
		if(l1>0 && l2<0){
 		l=0;
	}
	if(l1<0 && l2>0){
 		l=0;
	}
	if(l1>0 && l2>0){
 		l=l1+l2;
	}
		
		if(m1>0 && m2<0){
 		m=0;
	}
	if(m1<0 && m2>0){
 		m=0;
	}
	if(m1>0 && m2>0){
 		m=m1+m2;
	}
		
		if(n1>0 && n2<0){
 		n=0;
	}
	if(n1<0 && n2>0){
 		n=0;
	}
	if(n1>0 && n2>0){
 		n=n1+n2;
	}
		
		if(o1>0 && o2<0){
 		o=0;
	}
	if(o1<0 && o2>0){
 		o=0;
	}
	if(o1>0 && o2>0){
 		o=o1+o2;
	}
		
		if(p1>0 && p2<0){
 		p=0;
	}
	if(p1<0 && p2>0){
 		p=0;
	}
	if(p1>0 && p2>0){
 		p=p1+p2;
	}
	
		if(q1>0 && q2<0){
 		q=0;
	}
	if(q1<0 && q2>0){
 		q=0;
	}
	if(q1>0 && q2>0){
 		q=q1+q2;
	}
	
		if(r1>0 && r2<0){
 		r=0;
	}
	if(r1<0 && r2>0){
 		r=0;
	}
	if(r1>0 && r2>0){
 		r=r1+r2;
	}
	
		if(s1>0 && s2<0){
 		s=0;
	}
	if(s1<0 && s2>0){
 		s=0;
	}
	if(s1>0 && s2>0){
 		s=s1+s2;
	}
	
		if(t1>0 && t2<0){
 		t=0;
	}
	if(t1<0 && t2>0){
 		t=0;
	}
	if(t1>0 && t2>0){
 		t=t1+t2;
	}
	
		if(u1>0 && u2<0){
 		u=0;
	}
	if(u1<0 && u2>0){
 		u=0;
	}
	if(u1>0 && u2>0){
 		u=u1+u2;
	}
	
		if(v1>0 && v2<0){
 		v=0;
	}
	if(v1<0 && v2>0){
 		v=0;
	}
	if(v1>0 && v2>0){
 		v=v1+v2;
	}
	
		if(w1>0 && w2<0){
 		w=0;
	}
	if(w1<0 && w2>0){
 		w=0;
	}
	if(w1>0 && w2>0){
 		w=w1+w2;
	}
	
		if(x1>0 && x2<0){
 		x=0;
	}
	if(x1<0 && x2>0){
 		x=0;
	}
	if(x1>0 && x2>0){
 		x=x1+x2;
	}
	
		if(y1>0 && y2<0){
 		y=0;
	}
	if(y1<0 && y2>0){
 		y=0;
	}
	if(y1>0 && y2>0){
 		y=y1+y2;
	}
	
		if(z1>0 && z2<0){
 		z=0;
	}
	if(z1<0 && z2>0){
 		z=0;
	}
	if(z1>0 && z2>0){
 		z=z1+z2;
	}
	  
	  if (a>1)	printf("Jumlah Huruf a\t: %d \n",a);
	  if (b>1)	printf("Jumlah Huruf b\t: %d \n",b);
      if (c>1)	printf("Jumlah Huruf c\t: %d \n",c);
      if (d>1)	printf("Jumlah Huruf d\t: %d \n",d);
      if (e>1)	printf("Jumlah Huruf e\t: %d \n",e);
      if (f>1)	printf("Jumlah Huruf f\t: %d \n",f);
      if (g>1)	printf("Jumlah Huruf g\t: %d \n",g);
      if (h>1)	printf("Jumlah Huruf h\t: %d \n",h);
      if (i>1)	printf("Jumlah Huruf i\t: %d \n",i);
      if (j>1)	printf("Jumlah Huruf j\t: %d \n",j);
      if (k>1)	printf("Jumlah Huruf k\t: %d \n",k);
      if (l>1)	printf("Jumlah Huruf l\t: %d \n",l);
      if (m>1)	printf("Jumlah Huruf m\t: %d \n",m);
      if (n>1)	printf("Jumlah Huruf n\t: %d \n",n);
      if (o>1)	printf("Jumlah Huruf o\t: %d \n",o);
      if (p>1) 	printf("Jumlah Huruf p\t: %d \n",p);
      if (q>1)	printf("Jumlah Huruf q\t: %d \n",q);
      if (r>1) 	printf("Jumlah Huruf r\t: %d \n",r);
      if (s>1) 	printf("Jumlah Huruf s\t: %d \n",s);
      if (t>1) 	printf("Jumlah Huruf t\t: %d \n",t);
      if (u>1)	printf("Jumlah Huruf u\t: %d \n",u);
      if (v>1) 	printf("Jumlah Huruf v\t: %d \n",v);
      if (w>1)  printf("Jumlah Huruf w\t: %d \n",w);
      if (x>1)	printf("Jumlah Huruf x\t: %d \n",x);
      if (y>1)  printf("Jumlah Huruf y\t: %d \n",y);
      if (z>1)	printf("Jumlah Huruf z\t: %d \n",z);
	}	
