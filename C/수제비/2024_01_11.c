#include <stdio.h>
typedef struct {
    int acc;
    double bal;
} Acc;

double fn(double b, int y) {
    int i;
    double r = 1.0;
    for(i=0; i < y; i++) {
        r = r * b;
    }
    return r;
}

void init(Acc *a, int x, double y) {
    a->acc = x;
    a->bal = y;
}

void A(Acc *a, double en) {
    if(en > 0 && en < a -> bal) {
        a->bal = a->bal - en;
    }
    else {
        a->bal = a->bal + en;
    }
}

void B(Acc *a) {
    a->bal = a->bal + fn((1+0.1), 3);
}

int main() {
    Acc ba;
    //a의 구조체 acc는 x를 가진다. a의 acc는 9981
    //a의 구조체 bal은 y를 가진다. a의 bal은 2200.0
    init(&ba, 9981, 2200.0);

    //지금현재 ba의 bal은 2200.0이다.
    //
    A(&ba, 100.0);
    B(&ba);
    printf("%d and %.2f", ba.acc, ba.bal);
    return 0;
}
