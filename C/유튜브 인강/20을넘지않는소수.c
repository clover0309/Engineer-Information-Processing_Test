#include <stdio.h>

int isprime(int number){
    int i;
    for (i=2; i<number; i++)
    if(number%i == 0)
        return 0;
    return 1;
}

int main() {
    int number = 20;
    int cnt = 0, i;
    for(i=2; i<number; i++)
    cnt = cnt + isprime(i);
    printf("소수의 개수 : %d개",cnt);
    return 0;
}