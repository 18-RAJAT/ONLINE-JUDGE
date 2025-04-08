t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    print(abs(a-b)//10+min(1,abs(a-b)%10))