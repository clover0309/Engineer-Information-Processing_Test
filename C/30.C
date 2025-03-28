#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = "Hello";
    char b[10] = "Soojebi";
    char c[20] = "Hello";
    //문자형 배열 a 뒤에 b를 붙힘
    strcat(a,b);
    //따라서 값이 HelloSoojebi가 출력이 됨.
    printf("%s %s\n", a,b);
    //문자형 배열 c에 b배열의 1번째부터 3번째까지가 들어가게 되어서
    strncat(c,b,3);
    //HelloSoo Soojebi가 출력이 됨.
    printf("%s %s", c,b);
    return 0;
}