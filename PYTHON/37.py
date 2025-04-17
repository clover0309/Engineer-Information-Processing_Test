#파이썬에서 사용자 함수를 정의시 def를 사용해서 생성한다.
def fn(num):
    if num % 2 == 0:
        return 'Y'
    else:
        return 'N'
    
a = fn(5)
print(a)