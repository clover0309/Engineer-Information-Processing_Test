#include <stdio.h>
int a = 5;

void fn() {
    a=a+3;
}

int main() {
    // a+5 = 위에서 전역으로 선언된 5 + 5 = 10
    // a의값은 10이 된 상태에서
    a=a+5;
    // fn함수를 호출하게 된다면, a의 값에 10이 저장되어 있는 상태에서,
    // 10+3 = 13이 되어 a의 값은 13이 된다.
    fn();
    printf("%d", a);
    return 0;
}