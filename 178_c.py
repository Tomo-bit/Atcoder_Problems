n=int(input())
a=10**n
b=9**n
c=8**n
d=10**9+7
ans = (a-b-b+c)%d
print(ans)
