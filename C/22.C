#include <stdio.h>
int main(){
    /*
        2개의 배열을 8칸씩 생성.
        1번째 배열엔 H e l l o NULL NULL NULL 이 들어가 있음.
        2번째 배열엔 S o o j e b i NULL 이 들어가 있음.
    */
    char a[2][8] = {"Hello", "Soojebi"};
    //a[0]은 첫번째 배열을 0번지부터 NULL을 만나기 전 까지 출력 되므로
    // Hello가 출력됨.
    printf("%s\n", a[0]);
    //a[1]은 두번째 배열을 0번지부터 NULL을 만나기 전 까지 출력 되므로
    //Soojebi가 출력됨.
    printf("%s\n", a[1]);

    //a[1]은 두번째 배열의 3번째칸 부터 NULL을 만나기 전 까지 출력 되므로
    //jebi가 출력이 됨.
    printf("%s\n", a[1]+3);
    //a[1]은 두번째 배열을 의미하고, 두번째 배열의 4번지에 NULL을 넣어주었으니
    // S o o j NULL b i 가 되었음.
    a[1][4] = NULL;
    //a[1]은 두번째 배열을 2번지부터 NULL을 만나기 전 까지 출력 되므로
    // oj가 출력이됨.
    printf("%s\n", a[1]+2);
    return 0;
}