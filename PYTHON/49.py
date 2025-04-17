class A:
    def __init__(self):
        print('A')
    def fn(self):
        print('B')

class B(A):
    def __init__(self):
        print("C")
    def fn(self):
        print("D")

#a = 클래스 A를 호출
# 생성자가 존재함으로, 생성자 호출
# 'A'를 출력
a = A()
#b = 클래스 B를 호출
# 생성자가 존재함으로, 생상자 호출
# 'B'를 출력
b = B()

#b의 fn을 호출
# 'D'
b.fn()