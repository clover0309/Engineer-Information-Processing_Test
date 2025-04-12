#include <stdio.h>

void fun(int a, int b, int c) {
    if (c != 0) {
        fun(b, a+b, c-1);
        printf("%d %d %d \n", a, b, c);
    }
}

int main() {
    int i=1, j=1, k=3;
    fun(i,j,k);
       return 0;
}

/* 
    fun(1,1,3)
    c != 0
                    =       fun(1,1,3)
        fun(1,1+1,3-1) =    fun(1,2,2)
        fun(2, 2+1, 2-1) =  fun(2,3,1)
        1 1 3
        1 2 2
        2 3 1
*/