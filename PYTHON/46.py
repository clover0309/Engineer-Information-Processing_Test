class Soojebi:
    def __init__(self):
        print("생성자")
    
    def __del__(self):
        print("소멸자")
    
    def fn(self):
        print("일반 함수")

#생성자로 생성을 진행했음.
s = Soojebi() # "생성자" 출력
#s가 가진 일반함수 fn 실행.
s.fn() # "일반 함수" 출력.
del s # del 키워드를 통해, 소멸자 호출
        # "소멸자" 출력.