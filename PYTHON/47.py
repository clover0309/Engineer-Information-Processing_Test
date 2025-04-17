class Soojebi:
    def __init__(self):
        self.public = "PUBLIC"
        self.protected = "PROTECTED"
        self.private = "PRIVATE"
    
    def fn(self):
        print(self.public)
        print(self.protected)
        print(self.private)

s = Soojebi()
s.fn()
print(s.public)
print(s.protected)
# print(s.private)