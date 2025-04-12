#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;
    int b;
    int c[10];
    int *d = c;
    int e[10][10];
    float f;
    double g;
    int *h;
    char *i = "Hello";
    h = (int*)malloc(40);

    //자료형의 크기를 알려주는것이 sizeof니깐
    // char는 1바이트, int는 4바이트, float도 4바이트
    printf("%d %d %d\n", sizeof(char), sizeof(int), sizeof(float));
    // double은 8바이트, char는 1바이트, int는 4바이트
    printf("%d %d %d\n", sizeof(double), sizeof(char*), sizeof(int*));
    // a는 char니깐 1바이트 , b는 int니깐 4바이트, c는 int의 배열 10칸이니깐 40바이트
    printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));
    //포인터 d는 c와 같으니, 40바이트, e는 int형태의 2차원배열이니깐 80바이트?, e는 2차원배열 0번지의 1차원배열 0번지임으로 8바이트?
    printf("%d %d %d\n", sizeof(d), sizeof(e), sizeof(e[0]));
    // f는 float이니깐 4바이트, g는 double이니깐 8바이트. h는 정수형의 포인터 임으로 4바이트, i는 1바이트
    printf("%d %d %d %d\n", sizeof(f), sizeof(g), sizeof(h), sizeof(i));

    free(h);

    return 0;
}