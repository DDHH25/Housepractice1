#define LENG 10 // 매크로 상수 정의, 세미콜론 사용안함
#include <stdio.h>
int main()
{
    printf("Hello World\n");
    char n= 128; 
    //정수: char(1byte), short(2byte), int(4byte), long(W:4, M:8), long long
    printf("%d\n",n); //n에 들어있는 값을 출력하라   
    /* 나는 
    화이팅 한다 하하하하
    밑에는 정수형
    */
    char a= 124;// char는 1byte
    short b= 122;// short는 2byte
    int k= 631; // int는 4byte
    long t= 3333; // long은 W에선 4바이트 맥에선 8바이트
    long long w=1222; // long long은 8바이트
    /* 밑에는 실수형
    */
    float age= 122.3; // 4바이트
    double agge= 3336.46; // 8바이트
    long double aggge= 2291.3; //8바이트 이상
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(age) );
    printf("%d\n", sizeof(k));
    printf("%d\n", sizeof(agge));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(t));
    printf("%d\n", sizeof(100));
    printf("%d\n", sizeof(3.14));
    char kk='A';
    printf("%c\n", kk);
    int intp= 77;
    char pop= 69;
    printf("%c\n", intp);
    printf("%c\n", pop);
    const int Length= 61; // 심볼릭 상수 설정
    const float Leng=43.2;
    printf("%c\n", Length);
 
    /*
    자동형 변환
    */
   double number = 10; //10.0 됨
   double love = 5.432; //5로 됨
   short number2= 50000;
    printf("%f\n", number);
    printf("%0.3f\n", love);
    printf("%d\n", number2);
    unsigned char led= 170;
    printf("%d\n", led); 
    return 0;
    /*
    %d: 부호 있는 10진수 정수
    %u: 부호 없는 10진수 정수
    %f: 10진수 방식의 소수점 실수
    \t: 수평탭
    \b: 백스페이스
    %10d: 폭 10칸 확보 후 오른쪽 정렬
    %-10d: 폭 10칸 확보 후 왼쪽 정렬

    */
}