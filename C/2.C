#include <stdio.h>

int main() {
    //자동 변환으로 정수 5 반환
    int a = 5.5;
    // 10.0으로 반환
    double b = 10;
    // 5로 반환
    int c = (int)5.5;
    // 10.0으로 반환
    double d = (double)10;
    // 10으로 반환
    int e  = (int)d;
    // 5.0으로 반환
    double f = (double)c;

    return 0;
}