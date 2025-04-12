#include <stdio.h>
#include <string.h>

void fn(char* str) {
    char t;
    int len = strlen(str);
    //문자열의 시작을 의미하는 str[0]
    //*p1은 str[0] = *p1 = 'A'를 의미한다.
    char* p1 = str;
    //*p2는 str[len-1] = str[7] = 'H'를 의미한다.
    char* p2 = str + len - 1;
    while (p1 < p2) {
        t = *p1;
        *p1 = *p2;
        *p2 = t;
        p1++;
        p2--;
    }
}

int main(int argc, char* argv[]) {
    //char형태의 100칸짜리 str배열을 선언하고, 값을 ABCDEFGH로 초기화
    char str[100] = "ABCDEFGH";
    //int형태의 len, i변수 선언.
    int len, i;

    //위에서 만들어둔 함수 fn을 str을 인자값으로 넣어서 호출.
    fn(str);
    len = strlen(str);

    for (i = 1; i < len; i+=2) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}