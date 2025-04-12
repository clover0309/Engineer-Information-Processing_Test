a = "Soojebi 123"
print(a.upper()) #a의 값을 전부 대문자로 표기 "SOOJEBI 123"
print(a.lower()) #a의 값을 전부 소문자로 표기 "soojebi 123"
print(a.isalnum()) #a가 알파벳이나 숫자로만 구성되 있으면 True, 아니면 False를 출력, 공백이 포함됬으므로 False 출력
print(a.isalpha()) #a가 알파벳으로만 구성되 있으면 True, 아니면 False를 출력, 숫자와 공백이 포함됬으므로 False 출력
print(a.isdecimal()) #a가 정수면 True, 아니면 False 출력, 문자와 공백이 포함되있으므로 False 출력
print(a.isdigit()) #a가 숫자면 True, 아니면 False 출력, 문자와 공백이 포함되어 있으므로 False 출력
print(a.isspace()) #a가 공백으로만 구성되어 있으면 True, 아니면 False 출력, 문자와 숫자가 포함됬으므로 False 출력.
print(a.split()) #a를 구분자로 분리, 구분자가 지정되어있지 않으므로, 띄어쓰기 기준으로 분리함. ['Soojebi', '123'] 출력.
print(a.split(sep='1')) #a를 구분자인 1을 기준으로 분리, ['Soojebi', '23'] 출력
str="1,2,3".split(",") #str을 구분자 ,을 기준으로 분리
print(str) # ['1', '2', '3']출력