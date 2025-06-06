a = [20, 10, 30]
print(a) #위에서 선언한 리스트형태 그대로 출력됨

a.extend(a) #extend 함수는 리스트를 확장 시킬수 있음. 안에 a의 인자값은 [20, 10, 30]가 있으니, 이것이 맨 끝으로 하나 더 추가됨.
print(a) # [20, 10, 30, 20, 10, 30]

a.pop() #pop함수는 리스트의 마지막이나 특정 인덱스의 요소를 삭제할 수 있음. 현재는 기준이 없으니, 가장 마지막 것이 사라짐.
print(a) # [20, 10, 30, 20, 10]

a.reverse() #reverse함수는 리스트를 역순으로 뒤집어서 줌.
print(a) # [10, 20, 30, 10, 20]