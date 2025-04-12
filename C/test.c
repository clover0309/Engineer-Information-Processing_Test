#include <stdio.h>

typedef struct {
    char a;
    short b;
    int c;
} TEST;

typedef union {
    char a;
    short b;
    int c;
} TEST2;

int main() {
    TEST s_test;
    TEST2 u_test;
    int a = 0x12345678;

    s_test.c = a;
    u_test.c = a;
    
    printf("%X\n", s_test.a);
    printf("%X\n", s_test.b);
    printf("%X\n", s_test.c);

    printf("%X\n", u_test.a);
    printf("%X\n", u_test.b);
    printf("%X\n", u_test.c);
}