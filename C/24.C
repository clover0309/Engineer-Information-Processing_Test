#include <stdio.h>

//typedef는 기존 자료형에다가 새로운 이름을 붙혀줄 때 사용함.
// 결국에는 Student 구조체에 별칭으로 S를 지정한 것임.
typedef struct Student{
    char gender;
    int age;
} S;

//물론 실행은 여기서(main)부터 실행을 하게됨.
int main() {
    //구조체의 별칭을 사용하게 되면, 구조체를 선언할 때 struct를 붙히지 않아도 됨.
    // 구조체 S의 s를 선언하고, 각각에 F와 21로 초기화해줌.
    S s = {'F', 21};
    //s의 gender는 M으로 바꿔줌.
    s.gender = 'M';
    //각각 출력을 하게 된다면, M과 21이 출력이 되는데
    // 따로 개행이 되지 않으므로, M21이 출력이 된다.
    printf("%c", s.gender);
    printf("%d", s.age);
    return 0;
}
