#include <stdio.h>
#include <string.h>

//문자형 n을 배열 6칸 으로 초기화.
char n[6];
//문자형 soojebi포인터를 생성하고,
// string copy를 통해 n에 Hello를 복사하여 값을 주게됨
// 이때 배열에는 H e l l o \0이 들어가 있음.
char *soojebi(){
    strcpy(n, "Hello");
    return n;
}

//main에서 부터 프로그램이 시작이 됨.
int main(){
    //문자형 포인터 p는 soojebi와 같음.
    char *p = soojebi();
    //출력시 soojebi가 가지고있는 값은 H e l l o \0 이므로
    //Hello가 출력됨.
    //C언어에서는 문자열을 출력할 때 종료문자 \0은 출력되지않음.
    printf("%s\n", p);
    return 0;
}
