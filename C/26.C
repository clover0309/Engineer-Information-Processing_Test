#include <stdio.h>
//char형 함수 fn을 생성하고, 인자값을 int num을 전달 받음.
char fn(int num){
    if(num % 2 == 0)
        return 'Y';
    else
        return 'N';
}

//당연히 main부터 실행이 됨.
int main(){
    //char형태의 a는 fn을 호출하는데 int num값에 5을 전달함.
    char a = fn(5);
    //a는 fn을 호출했을 때, 5를 전달했으니, 5 % 2는 1이 되므로
    //N이 출력이 됨.
    printf("%c\n", a);
    return 0;
}