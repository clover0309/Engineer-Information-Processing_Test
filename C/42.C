#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};

    /*
        p1 p2 포인터 변수에 a+1 주소값을 저장하고 초기화하는데
        p1, p2가 가리키는 대상의 값을 변경하지 못하도록 제한이 되어있음.

        포인터가 가리키는 대상의 값을 변경하지 못하도록 제한을 걸게 상수를 작성하는 법은
        const int *p1, int* const p1 이런식으로 작성해야 값이 변경되지 않도록 제한을 걸 수 있다.
    */

    //밑에 2가지 상수는 a의 1번지를 가리키게 되어, 20이 되어 있음.
    const int *p1 = a+1;
    int const *p2 = a+1;
    
    //얘는 그냥 정수형 포인트 상수 p3인데 a[0]을 가리킴.
    int* const p3 = a;

    /*포인터 변수에 상수로 제한이 걸려있지만, 주소값을 변경 삭제 삽입에 대해서는 제한이 없음.
    메모리 자체의 주소를 건들이게 된다면은 컴파일러에서 오류가 발생하지만, 주소값(주소안의 Value)를 건들이는데는
    아무제한 없이 수정이 가능하다.
    p3는 a배열을 통째로 가지고 있으므로, p3의 0번지를 참조하게 되면 안에 값은 10이 들어가 있지만,
    15로 변경을 하였으므로 실제 p3 배열안에 값은 15 20 30이 되게 된다.
    */
    p3[0] = 15;

    //p1은 a배열의 0번지를 참조함으로 15가 된다.
    p1 = a;
    //p2도 마찬가지로 a의 0번지를 참조함으로 15가 된다.
    p2 = a;

    //출력을 하게 되면 15 15 15 가 출력이 된다.
    printf("%d %d %d", *p1, *p2, *p3);

    return 0;
}