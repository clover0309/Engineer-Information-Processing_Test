#include <stdio.h>
int main() {
    //문자형 a에 배열 8칸을 생성했음.
    // H e l o o \0 \0 \0 이렇게 생성되어 있음.
    char a[8] = "Hello";
    //a의 0번지부터 출력하라는 뜻이므로 Hello가 출력됨.
    printf("%s\n", a);
    //a의 1번지부터 출력하라는 뜻이므로 ello가 출력됨.
    printf("%s\n", a+1);
    //a의 4번지는 NULL이 됨.
    a[3] = NULL;
    //a[1]을 가리키므로, e부터 시작되어 NULL이 만나면 출력이 끝나므로
    //el이 출력이 됨.
    printf("%s\n", a+1);
    //a[4]를 가리키므로, o부터 시작되어 NULL이 만나면 출력이 끝나므로
    //o만 출력이 됨.
    printf("%s\n", a+4);
    return 0;
}