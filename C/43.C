#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    //문자형 tmp에 배열 10칸으로 초기화.
    char tmp[10];
    //문자형 포인터 p는 배열 2칸으로 초기화
    char* p[2];
    //반복문을 돌리기 위한 정수형 i 초기화
    int i;

    //반복문 시작. i값이 2보다 커지면 탈출함.
    for (i=0; i<2; i++){
        //이건 내가 구분하기 위해서 추가한 printf. 코드와는 관계가 없음.
        printf("값을 입력해주세요 : ");
        //값을 입력받는데, tmp에다가 저장함.
        scanf("%s", tmp);
        //p[i]안에, scanf를 통해서 입력받은 값들을 0번지와 1번지에 추가를 하기도 하지만
        //메모리에다가 동적으로 할당함.
        p[i] = (char*)malloc(sizeof(char)*(strlen(tmp)+1));
        //string copy를 통해, p[i]번째에 있는걸, tmp에 복사함.
        strcpy(p[i], tmp);
    }

    //반복문 시작. i값이 0보다 작거나 같아질때 반복문 탈출.
    for(i=1; i>=0; i--){
        //그냥 단순히 p배열 안에 i번째 것을 출력하게 됨.
        printf("%s\n", p[i]);

        //동적으로 할당된 메모리를 p[i]번째 것을 해지함.
        free(p[i]);
    }

    return 0;
}