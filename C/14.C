#include <stdio.h>
int main() {
    int i=0, sum=0;
    while (i<2) {
    //0부터 시작해서 1까지만 반복되는 반복문.
    //i가 0일 때 sum에 0+0=0이 들어가고, i가 1일 때 sum에 0+1=1이 들어간다.
    //후연산으로 들어가기에, i가 1일때는 이미 while문으로 가기전에 2가 되어있기 때문에
    // 0+1+2 로 계산이 되어, 값은 3이다.
        i++;
        sum=sum+i;
    }
    printf("%d", sum);
    return 0;
}