#include <stdio.h>

int main(){
    int a = 3, b = 4;
    {
        //지역으로 선언된 변수 a가 정수 5로 초기화 되었으므로로
        int a = 5;
        //여기서 출력될 때, a는 지역변수에 선언된 5, b는 전역변수에 선언된 4가 출력된다.
        printf("%d %d\n", a, b);
    }
    // 반대로, 여기는 지역변수에 영향을 받지 않으므로, 3,4가 출력이 된다.
    printf("%d %d\n", a, b);
    return 0;
}