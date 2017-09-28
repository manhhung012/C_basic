# include <math.h>
# include <stdio.h>
int main()
{ float a,b,c,D,S,p;
printf("Nhap lan luot do dai 3 canh cua tam giac:\n");
scanf("%f",&a);scanf("%f",&b);scanf("%f",&c);
if ((a+b<=c)||(a+c<=b)||(b+c<=a)) {printf("Tam giac khong ton tai\n");}
else 
{D=a+b+c;
printf("Chu vi tam giac tren la: %0.1f\n",D);
p=(a+b+c)/2;
S=sqrt(p*(p-a)*(p-b)*(p-c));
printf("Dien tich tam giac la: %0.1f",S);}
}
