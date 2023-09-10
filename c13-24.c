/*
13. 다음 수행결과는 ? 2
*/
void main(void){
    int a = 3, b = 4, c =2;
    int r1, r2, r3;

    r1 = b<=4 || c ==2 ; // r1 = 1
    r2 = (a>0) &&(b<5); // r2 = 1

    printf("%d",r1+r2);
    return 0;
}

/*
14. 다음 수행결과는 ? 9 3 0 8 2
*/
void main(void){
    int a = 3+5, b = 1, c;
    int ap, bp;

    ap = a++; // ap=8, a=9, 조심 
    bp = ++b; // 2
    b = 3*(ap==8); // b=3
    c= 5 *(ap !=8); // c = 0, a = 9, ap = 8, bp = 2
    printf("%d %d %d %d %d",a,b,c,ap,bp);
    return 0;
}

/*
15. 다음 수행결과는 ? 6.2, 6
*/
void main(void){
    double d_value; 
    float f_value = 5.65;
    int n;
    d_value = f_value; // d = 5.65
    d_value = d_value + 0.5; // d = 6.15
    n  = (int)d_value;  // 6
    printf("%3.1f, %d",d_value,n); // 6.2, 6 , 3.1의미 3개의 공간 확보하고 소수점 첫번째까지 출력해라, 반올림하고
}

/*
16. 다음 수행결과는 ? 
16,20,10
17,21,11

0001 0000 / 10, 20
0001 0001 / 11, 21
*/
int a = 16
printf("%d,",a); // 16
printf("%o,",a); // 20
printf("%x",a); // 10

int a = 17
printf("\n%d,",a);
printf("%o,",a);
printf("%x",a);

/*
17. 실행 결과는? x=17, y=1, z=31
*/
void main(void){
    int x = 0x11; //16진수, 10진수 17
    int y,z;
    y = x  & 0x0f; // 0001 0001 & 0000 1111 = 0000 0001, 1
    z = x | 0x0f;  // 0001 0001 | 0000 1111 = 0001 1111, 31
    printf("x=%d, y=%d, z=%d",x,y,z); 
}

/*
18. 실행 결과는 ? 7
*/
int a = 4; // 0100
int b = 7; // 0111
int c = a | b; // 0111
printf("%d",c); // 7

/*
19. c언어에서 정수 변수 a,b에 각각 1,2가 저장되어 있을 때 연산 결과? 1
*/
a < b+2 && a<<1 <= b // 참 && 참 

/*
20. C에서 '^'는 비트 간 XOR 연산을 표현 5^13의 결과는? 8
*/
5 /    0101
13 /   1101
5^13 / 1000 

/*
21. c의 실행 결과로 옭은 것은? -6, 4
*/
void main(void){
    int num1 = 5; // 양수, |5| + 1 , - 붙임
    int num2 = -5; // 음수, |5| -1 , + 붙임
    printf("%d, %d", ~num1, ~num2); 
}

/*
22. 실행 결과로 옳은 것은 ? i=0.0 j=0 k=3 m=003
*/
#define VALUE 1
#define VALUE 2

float i;
int j,k,m;
i = 100/ 300; // 0.0
j = VALUE1 & VALUE2; // 0000
k = VALUE1 | VALUE2; // 0011
if(j&&k||i) m = i + j;
else m = j+k; // 3
printf("i=%.1f j=%d k=%d m=%03d\n",i,j,k,m);

/*
23. 출력 결과 값은? b=40
*/
void main(void){
    int a, b;
    a= 20;
    b = ( a > 10) ? a+a : a*a;
    printf("b=%d\n",b);
}

/*
24 삼항 조건 연산자를 사용하여 옳게 나타낸 것은 ? 
    k = i>j ? k= i-j : k = i+j;
*/
int i = 7, j =9;
int k;
if( i>j) k = i - j;
else k = i + j;