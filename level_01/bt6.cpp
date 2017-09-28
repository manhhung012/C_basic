# include <stdio.h>
int main()
{ int N,a,b,c;
printf("Nhap 1 so nguyen co 3 chu so: ");
scanf("%d",&N);
c=N%10;
b=(N%100)/10;
a=N/100;
printf("So nghich dao cua so nguyen tren la: %d%d%d",c,b,a);
}
