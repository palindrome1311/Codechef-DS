# cook your dish here
t = int(input())
for _ in range(t):
    f=0
    n = int(input().strip())
    a = list(map(int, input().strip().split(' ')))
    b = a[::-1]
    if(a!=b):
        f+=1
    else:
        for i in range(1,8):
            if i not in a:
                f+=1
                break
        for j in range(n-2):
            if abs(a[j]-a[j+1])>1 or a[j]<0 or a[j]>7:
                f+=1
                break
    if f==0:
        print("yes")
    else:
        print("no")