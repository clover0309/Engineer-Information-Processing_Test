#인자값에 1, 2, 4를 던졌을 때,
#인자값 순서대로 실행이 된다.
# 1 + 2 + 4 가 되어 출력값은 7이 된다.

def sum_many(*a):
    sum = 0
    for i in a:
        sum += i
        return sum

b = sum_many(1, 2, 4)
print(b)