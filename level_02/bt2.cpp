# include <stdio.h>
# include <math.h>
int main()
{
    float N,a;
    int c;
    printf("Nhap so bat ki");
    scanf("%f",&N);
    a=sqrt(N);
    c=a;
    if((a-c)==0) {printf("Day la so chinh phuong");}
    else
    {printf("Day khong phai la so chinh phuong");}
}
