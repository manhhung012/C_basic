
#include <stdio.h>
int main ()
{ int a;
printf ("nhap vao 1 so: ");
scanf ("%d",&a);
if (a<=7)
{if (a==2||a==3||a==5||a==7)  printf(" so vua nhap la so nguyen to: %d",a);
  else printf(" so vua nhap khong phai so nguyen to ");}
  else 
  { if (a%2==0 || a%3==0 || a%5==0 || a%7==0) printf (" so vua nhap ko phai la so nguyen to");
    else printf (" so vua nhap la so nguyen to ");}}
