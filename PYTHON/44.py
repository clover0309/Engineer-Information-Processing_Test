a = [1,2,3,4,5]

# 람다식을 통해서, 리스트 a에 있는 것을 num에 전달하면서, 비교를 함. 2보단 커야함.
m = list(filter(lambda num : num>2, a))
#위의 리스트에서 2보다 큰건 3,4,5니
#[3, 4, 5]가 출력됨
print(m)