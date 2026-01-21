#include <stdio.h>
int main()
{
    char char1;
    int num1;
    float flo1;

    scanf(" %c", &char1);
    scanf("%d", &num1);
    scanf("%f", &flo1);

    printf("%c %d %f\n",char1,num1,flo1);

    return 0;

}