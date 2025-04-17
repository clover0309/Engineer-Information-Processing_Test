class A:
    def fnA(self):
        print('A')

class B(A):
    def fnB(self):
        print('B')

b = B()
b.fnA()
b.fnB()