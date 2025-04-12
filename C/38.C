#include <stdio.h>
//구조체 선언.
struct Student{
    char gender;
    int age;
};

//main에서 부터 프로그램 시작.
int main() {
    //Student 구조체 s는 3칸의 배열을 가지고 있고, 밑에 값으로 초기화함.
    struct Student s[3] = {'F',21, 'M',20, 'M',24};
    //Student 구조체 포인터 p는 s로 초기화함.
    struct Student *p = s;
    //포인터 s의 0번지의 gender와 age를 출력하게되면 F 21이 출력됨.
    printf("%c %d\n", s[0].gender, s[0].age);
    //포인터 s만 참조할 경우에는, 0번지부터 시작을 하게 되므로 F 21이 출력됨.
    printf("%c %d\n", (*s).gender, (*s).age);
    //구조체 s로 gender와 age의 값을 가리키면 0번지의 값을 의미함으로 F 21이 출력됨.
    printf("%c %d\n", s->gender, s->age);
    //구조체 배열 s+1은 1번지를 의미하게 되므로, M 20 이 출력됨.
    printf("%c %d\n", (s+1)->gender, (s+1)->age);
    //1차원 포인터 p의 0번째는 F 21 을 의미함.
    printf("%c %d\n", p[0].gender, p[0].age);
    //1차원 포인터 p를 가리키게 되면 0번지를 가리키므로 F 21이 출력됨.
    printf("%c %d\n", p->gender, p->age);
    //1차원 포인터 p에 1을 더하게 되면 1번지를 가리키므로 M 20이 출력됨.
    printf("%c %d\n", (p+1)->gender, (p+1)->age);
    return 0;
}