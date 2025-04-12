#include <stdio.h>
#include <string.h>
int main() {
    char a[20] = "Hello";
    char b[10] = "Soojebi";
    char c[20] = "Hello";

    //strcpy 함수는 배열의 문자열 배열안에 있는 값을 변경함.
    //지금 같이 쓰이게 된다면, a에 Hello가 들어있는 상황에서, b로 변경하라는 의미인데.
    // 이렇게되면 Hello가 사라지고, b에 들어있는 Soojebi로 변경이 된다.
    strcpy(a,b);
    //출력시 Soojebi Soojebi가 출력된다.
    printf("%s %s \n", a,b);

    //c배열안에 b를 복사하여 넣는데 0 1 2번째까지만 복사하여 변경시킨다.
    strncpy(c,b,3);
    //Soolo가 출력이됨.
    printf("%s %s", c,b);

    return 0;
}
