i = 0
sum = 0

# 파이썬에서는 반복문을 사용할 때 for를 쓰는것은 같지만 in range를 통해서 반복을 진행한다.
# 1부터 3까지 반복 (여기서도 범위를 지정할때, -1을 수행해야함.)
for i in range (1,4):
    sum = sum + i
    # 1 + 2 + 3 = 6
print(sum)