#include <stdio.h>
//공용체 Stduent를 생성.
// 공용체는 구조체와 비슷하지만, 구조체는 각각의 변수들이 메모리를 각각 차지하지만
// 공용체는 가장 큰 변수의 메모리를 차지하게 됨.
// 즉, id와 age가 4바이트씩 차지하게 되는데, 가장 큰 변수가 4바이트이므로
// 공용체는 4바이트만 차지하게 됨.
union Student {
    int id;
    int age;
    long num;
};

//당연히 main부터 실행이됨.
int main() {
    //공용체 Student의 s를 선언하고, age를 20으로 초기화.
    union Student s = {.age=20};
    //가장 큰 자료형이 int인데, age가 20으로 초기화 되었으니
    //id와 age는 20이 된다.
    printf("%d %d\n", s.id, s.age);
    s.id = 2000;
    //id가 2000으로 바뀌었으니, id는 2000이 되고, age는 2000이 되는데
    //공용체는 가장 큰 자료형의 메모리를 차지하게 되므로, 2000이 출력이 됨.
    printf("%d %d\n", s.id, s.age);
    s.age = 18;
    //age가 18로 바뀌었으니, id는 18이 되고, age는 18이 되는데
    //공용체는 가장 큰 자료형의 메모리를 차지하게 되므로, 18이 출력이 됨.
    printf("%d %d\n", s.id, s.age);
    return 0;
}