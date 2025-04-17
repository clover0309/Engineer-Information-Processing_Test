def soojebi(num1, num2=2):
    print('a = ', num1, 'b = ', num2)

#사용자 정의 함수를 호출할 때 인자 값을 전달해서 출력함

soojebi(20) #여기서는 num1에만 인자값을 전달함.
#출력 값은 "a = 20, b = 2"

soojebi(20,3) #num1, num2에 각각 인자값을 전달함
#출력 값은 "a = 20, b = 3"

soojebi(num2 = 20, num1 = 3) #num2에 20을 전달, num1에 3을 전달
#출력 값은 "a = 3, b = 20"