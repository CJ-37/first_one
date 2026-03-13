#include<stdio.h>
#include<conio.h>
void main()
{

    int a=4;
    int b= ++a + a++ * ++a % a++ + a++ % a;
    printf("\n%d",a);
    printf("\n%d",b);
}