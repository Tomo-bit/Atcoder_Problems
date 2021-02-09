n, m = map(int, input().split())
a = [list(map(int, input().split())) for i in range(m)]
b=[]

#重複がある時を除外
for i in range(m):
    for j in range (i+1,m):
        if a[i][0]==a[j][0] and a[i][1]!=a[j][1]:
            print(-1)
            exit()

#条件のついた桁の数を取り出すとともに、
#条件がつかなかった桁を10として認識する
for j in range(1,n+1):
    c=10
    for i in range(m):
        if a[i][0]==j:
            c=min(c,a[i][1])
            break #各桁について条件は１つだけだからbreakしてもよい
    b.append(c)

if n==3:
    if b[0]==10:
        b[0]=1
    if b[1]==10:
        b[1]=0
    if b[2]==10:
        b[2]=0

if n==2:
    if b[0]==10:
        b[0]=1
    if b[1]==10:
        b[1]=0
if n==1:
    if b[0]==10:
        b[0]=0 #n==2,3とは異なる

if (n==2 or n==3) and b[0]==0:
    print(-1)
    exit()

print(*b,sep="")









