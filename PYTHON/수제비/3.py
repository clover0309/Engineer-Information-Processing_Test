def fn(x):
    n = len(x)


for i in range(1, n):
    now = x[i]
    j = i-1
    while j>=0 and x[j]>now:
        x[j+1] = x[j]
        j-=1
        x[j+1]=now

x = [5, 8, 2, 3]
fn(x)
print(x)