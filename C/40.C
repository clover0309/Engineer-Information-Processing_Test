#include <stdio.h>

//반환하지 않는 함수 fn1을 선언
void fn1() {
    printf("fn1 함수 \n");
}

//정수형의 fn2을 정수형 파라미터를 받으면서 선언함.
int fn2(int a) {
    printf("fn2 함수: %d \n", a);
    return 0;
}

int main() {
    //pf1이라는 포인터 선언.
    void (*pf1)();
    //pf2라는 포인터를 선언하는데, int를 인자값으로 받게 선언.
    int (*pf2)(int);

    //fn1 호출
    fn1();
    //fn2 호출이 되지만, 인자값 5을 던짐.
    fn2(5);

    //pf1에 함수 fn1 대입, fn1와 같아짐.
    //fn1 함수 출력.
    pf1 = fn1;
    //pf2에 함수 fn2 대입, fn2와 같아짐.
    //fn2 함수 : 5가 출력됨.
    pf2 = fn2;

    //fn1이 함수가 출력이 됨.
    pf1();
    //fn2 함수가 출력되는데 인자값인 2를 던지게 되어 fn2함수 : 2를 출력.
    pf2(2);

    return 0;
}