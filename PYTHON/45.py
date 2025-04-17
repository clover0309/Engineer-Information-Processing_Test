class Soojebi:
    #self는 자바에서 this와 같다.
    def setS(self, a):
        self.a = a
    def getS(self):
        return self.a
    
a = Soojebi()
a.setS(5)
print(a.getS())