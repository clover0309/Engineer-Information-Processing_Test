#include <stdio.h>

int main() {
    char *fruits[] = {"apple", "banana", "cherry"};
    printf("fruits : %s\n", fruits);

    printf("*fruits : %s\n", *fruits);
    printf("*fruits+1 : %s\n", *fruits+1);

    printf("*(fruits+1) : %s\n", *(fruits+1));
    return 0;
}

