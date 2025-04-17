class A:
    def fn(self):
        print('A')

class B(A):
    def fn(self):
        super().fn()
        print('B')

#a는 B를 호출함.
#생성자가 없으므로 아무것도 하지않음.
a = B()

#super는 부모의 것을 의미함으로, A의 fn을 실행
#A
#B 출력.
a.fn()