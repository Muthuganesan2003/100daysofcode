# cook your dish here
a=int(input())
while a!=0:
    n=int(input())
    res=pow((0.143*n),n)
    if res<0.5:
        print(0)
    else:
        print(round(res))
    a-=1
