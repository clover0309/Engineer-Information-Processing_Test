#include <stdio.h>
//Student 구조체 생성.
struct Student{
    char gender;
    int age;
};

//main에서 부터 시작.
int main() {
    //구조체 Student형태의 s에 'F', 21로 초기화
    struct Student s = {'F', 21};
    //구조체 Student형태의 포인터 p는 s의 주소값을 참고함.
    struct Student *p = &s;

    //구조체 내의 변수를 출력하니, F 21 이 출력됨.
    printf("%c %d\n", s.gender, s.age);
    //구조체 s의 주소값을 참조하여서 F 21 이 출력됨.
    printf("%c %d\n", (&s)->gender, (&s)->age);
    //p가 가리키는 구조체 값들을 출력하게 되서 F 21이 출력됨.
    printf("%c %d\n", p->gender, p->age);
    //포인터 p가 가리키는 gender와 age의 값을 출력하게 되서 F 21이 출력됨.
    printf("%c %d\n", (*p).gender, (*p).age);
    //p는 1차원 포인터이므로, p[0]으로 구조체 s를 접근할 수 있음. F 21이 출력됨.
    printf("%c %d\n", p[0].gender, p[0].age);
    return 0;
}