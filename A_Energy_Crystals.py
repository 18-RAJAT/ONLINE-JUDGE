t=int(input())
for _ in range(t):
    a=[0,0,0]
    x=int(input())
    ans=0
    while a[0]<x:
        ans+=1
        a[0]=min(x,a[1]*2+1)
        a.sort()
    print(ans)