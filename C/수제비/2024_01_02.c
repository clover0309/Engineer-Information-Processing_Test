#include <stdio.h>

int main() {
    //우선에 v1 v2 v3에 각각 0 35 29를 대입한다.
    int v1 = 0 , v2 = 35, v3 = 29;
    //여기서 삼항연산자를 통해 값을 비교한다.
    //v1이 v2보다 크면 v2로 비교를하고, v1이 v2보다 작으면 v2로 비교를 한다.
    //즉 참이면 v2, 거짓이면 v1을 대입해서 조건문을 수행한다.
    if(v1>v2 ? v2:v1) {
        //비트연산자를 통해, v2의 값을 2비트 왼쪽으로 이동시킨다.
        /*
         35 = 100011 (1+2+32=35)
         35<<2 = 35 * (2^2) = 35 * 4 = 140 을 의미하게 된다.
        */
        // 이제 v2의 값은 140이 되었다.
        v2 = v2<<2;
    }
    else { 
        //비트연산자를 통해, v3의 값을 2비트 왼쪽으로 이동시킨다.
        //여기서도 마찬가지로, 29 * (2^2) = 29 * 4 =116을 의미하게 된다.
        // 이제 v3의 값은 116이 되었다.
        v3 = v3<<2;
    }
    //마지막으로 v2와 v3의 값을 더한 값을 출력한다.
    //위에서 if문이 거짓임으로, v3의 값은 116이 되었음.
    // 따라서 35+116 = 151이 된다.
    //출력값은 151.
    printf("%d", v2+v3);
    return 0;
}