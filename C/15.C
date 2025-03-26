#include <stdio.h>
int main() {
    int i=1, sum=0;
    do{
        //안에서 이미 0+0으로 do문을 탈출하지만,
        //i가 후연산이 되지만, 현재는 sum의 값을 봐야하기 때문에.
        //0+1이 되어서 1이 출력이된다.
        // i후연산이랑은 관련이 즈언혀 없다.
        sum=sum+i;
        i++;
    } while (i<0); //이미 여기서 조건문 while이 벗어나지는 상황이다. (걍 의미없음.)
    printf("%d\n", sum);
    return 0;
}