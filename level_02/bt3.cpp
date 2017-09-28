# include <stdio.h>
# include <math.h>
int main()
{
	float a,b,c,D,x1,x2;
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
		printf("PT trinh co 1 nghiem duy nhat: %f",x1);
	}
	else
	{
	D=(b*b)-4*a*c;
	if (D<0) {printf("PT vo nghiem");}
	else
	if (D==0)
	{
		x1=-b/(2*a);
		printf("PT co nghiem kep: %0.1f",x1);
	} else
	{
		x1=(-b-sqrt(D))/(2*a);
		x2=(-b+sqrt(D))/(2*a);
		printf("PT co 2 nghiem phan biet x1, x2 la: %0.1f,%0.1f",x1,x2);
	}
	}
}
