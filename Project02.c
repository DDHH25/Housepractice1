#include <stdio.h>
# define LENG 30

int main()
{
    char ch1=66, ch2 = 'C';
    short ch3=81;
    const int LENG2= 22;
    printf("%c\n", ch1);
    printf("%c\n", ch2);
    printf("%c\n", ch3);
    printf("%d\n", LENG);
    printf("%d\n", LENG2);
    printf("%f\n",(double)LENG);
    printf("%f\n",(float)LENG2);


    return 0;

}