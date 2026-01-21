#include <stdio.h>
int main()
{
    int num=10;
    num++;

    printf("%d\n", num);
    printf("%d\n",++num); //앞에 써야 1이 더해짐
    printf("%d\n", num+3);
    //&&: AND ||: OR !: NOT, C언어는 참을 1로 거짓을 0으로 표현

    int num1= 20, num2=10;
    int result;
    result= 1&&1;
    printf("result1:%d\n", result); //1
    result=num1==20&&num2==10;
    printf("result2: %d\n", result); //1

    result= num1>num2 && num1==num2;    //0
    printf("result3: %d\n", result);

    //삼항조건 연산자 조건 ? 결과1 : 결과2
    int num3=20;
    int num4;
    printf("정수입력:");
    scanf("%d", &num4);
    char ans;
    ans= num4 > num3 ? 1: 0;
    printf("%hhd\n", ans);
    return 0;

}