#include <stdio.h>
int main() {
    //정수 i를 1로 초기화.
    int i = 1;

    //반복문 시작. i가 5보다 작을 때까지만 반복을한다.
    while(i < 5){
        //i는 후연산으로 1씩 증가함.
        i++;
        //만약 i가 3과 같아지면
        if(i == 3)
            //밑에 있는 printf 구문을 실행하지 않고, 바로 반복문으로 다시 보내버림.
            continue;
            /*
            1이 들어가면 if문으로 가는 순간, 후연산으로 인해 이미 값은 2가 되어있음.
            2가 출력되고, i가 2가되어 있는 상태에서, if문에 충족되지 않고, 2가 출력되고 다시 반복문이 돌아감.
            2가 들어가면 if문으로 가는 순간 i값은 3이 되어있음. 근데 여기서 continue문으로 인해 바로 while문으로 돌아가버림 (즉 값을 출력하지않음)
            그러면 후연산된 값이 이미 3이기에, 3으로 while문이 또 시작됨
            3이 들어오면 if문으로 가면 4가 되어있으므로, if문에 걸리지 않으므로, 4가 출력이됨.
            4가 들어오면 if문으로 가면 5가 되어있으므로, if문에 걸리지 않으므로, 5가 출력이됨.
            5가 들어오면 while문의 조건과 맞지않아, 자동으로 반복문을 탈출함.
            while문 안에서는 245가 출력됨
            */
        printf("%d", i);
    }
    //while문을 탈출하게 되면, 마지막으로 얻은 i의 값은 5이므로 5가 출력이됨
    // 출력 결과물은 2455가 된다.
    printf("%d", i);
    return 0;
}
