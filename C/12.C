#include <stdio.h>
int main() {
    int a=26, b=91;

    //참 거짓으로 a가 참일때 나오는 값 (26) b는 거짓일 때 나오는 값 (91)
    //근데 여기서 조건식이 참이니, a가 출력되어서 26이 출력됨.
    int x=a<b ? a:b;
    printf("%d", x);
    return 0;
}