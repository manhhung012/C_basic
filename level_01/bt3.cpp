# include <stdio.h>
int main()
{int d,m,y,f;
printf("Nhap vao lan luot ngay thang nam\n");
printf("ngay: ");
scanf("%d",&d);
printf("Thang: ");
scanf("%d",&m);
printf("Nam: ");
scanf("%d",&y);
if ((d<0)||(d>31)||(m<1)||(m>12)||(y<0)) {printf("khong co ngay nay");} else
if ((m==2)&&(d>29)) {printf("Khong co ngay nay");} else
{f=y%100;
printf("dd/mm/yy: %02d/%02d/%02d",m,d,f);}}
