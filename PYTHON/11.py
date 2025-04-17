#항상 주의해야할 것, 마지막 번지 까지 추출을 한다하면, 마지막인덱스-1을 해서 한칸을 줄여서 출력한다.

print('soojebi'[1:]) #1번 인덱스부터 순차적으로 추출. oojebi출력.
print('soojebi'[2:4]) #2번 인덱스부터 4-1번인덱스 까지 추출, oj 출력
print('soojebi'[:3]) #3번 인덱스까지 추출 sooj 출력

#첫번째 soojebisoojebi를 [1:3-1]까지 추출. 두번째 soojebisoojebi를 [8:10-1]까지 추출.
#항상 마지막은 -1을 해줘서 한칸씩 줄인다.
# 추출시 oo, oo 비교를 하니 같은 값을 가지므로 True 출력.
print('soojebisoojebi'[1:3]=='soojebisoojebi'[8:10])
