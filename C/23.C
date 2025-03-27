#include <stdio.h>
//Student라는 구조체를 생성함.
//자바의 클래스와 유사하지만, 얘는 안에서 행동(함수)를 정의할 수는 없음.
struct Student {
    //Student라는 구조체 안에는 문자형과 정수형이 존재함.
    char gender;
    int age;
};
// 실행은 여기서 부터 실행이 됨.
int main() {
    //구조체 Student형태의 s를 선언하고, gender와 age를 각 F와 21로 초기화.
    struct Student s = {'F', 21};
    //s의 gender의 값을 M으로 바꿔줌.
    s.gender = 'M';
    //각각 출력을 하게 된다면, M과 21이 출력이 되는데
    // 따로 개행이 되지 않으므로, M21이 출력이 된다.
    printf("%c", s.gender);
    printf("%d", s.age);
    return 0;
}