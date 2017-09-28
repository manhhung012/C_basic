# include <stdio.h>
# include <math.h>
int main()
{
	float a,b,c,D,x1,x2,m1,m2,m3,m4;
	printf("Nhap lan luot cac he so a,b,c: \n");
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("c: ");
	scanf("%f",&c);
	if (a==0)
	{
		if (b==0) {printf("PT vo so nghiem");}
		else
		x1=-c/b;
		if (x1<0) {printf("PT vo nghiem");}
		else
		m1=sqrt(x1);
		m2=-sqrt(x1);
		printf("PT trinh co 2 nghiem x1, x2: %f,%f",m1,m2);
	}
	else
	{
	 D=(b*b)-4*a*c;
	 if (D<0) {printf("PT vo nghiem");}
	 else
	    {
	     if (D==0)
		 {
		 x1=-b/(2*a);
		 if (x1<0) {printf("PT vo nghiem");}
		 else
		  {
		    
		   m1=sqrt(x1);
		   m2=-sqrt(x1);
		   printf("PT trinh co 2 nghiem x1, x2: %0.1f,%0.1f",m1,m2);
	      }
	     }
	      else
	    {
		x1=(-b-sqrt(D))/(2*a);
		x2=(-b+sqrt(D))/(2*a);
		if ((x1<0)&&(x2<0)) {printf("PT vo nghiem");}
		else
		{
		  if ((x1>=0)&&(x2<0))
		 {
		   m1=sqrt(x1);
		   m2=-sqrt(x1);
		   printf("PT co 2 nghiem phan biet x1, x2 la: %0.1f,%0.1f",m1,m2);
		 }
		 else
		 if ((x1<0)&&(x2>=0))
		 {
		  m1=sqrt(x2);
		  m2=-sqrt(x2);
		  printf("PT co 2 nghiem phan biet x1, x2 la: %0.1f,%0.1f",m1,m2);
		 }
		 else
		 {
		 x1=(-b-sqrt(D))/(2*a);
		 x2=(-b+sqrt(D))/(2*a);
		 m1=sqrt(x1);
		 m2=-sqrt(x1);
		 m3=sqrt(x2);
		 m4=-sqrt(x2);
		 printf("PT co 4 nghiem phan biet x1, x2, x3, x4 la: %0.1f,%0.1f,%0.1f,%0.1f",m1,m2,m3,m4);
		 }
       }
    }
}}}
